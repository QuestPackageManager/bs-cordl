#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/SerializableBeatmapKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Destinations/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SerializableBeatmapKey)
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
class SerializableBeatmapKey;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Destinations::SerializableBeatmapKey);
// Dependencies BeatSaber.Destinations.BeatmapCharacteristic, BeatmapDifficulty, System.Object
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.SerializableBeatmapKey
class CORDL_TYPE SerializableBeatmapKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field _characteristic, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__characteristic, put = __cordl_internal_set__characteristic)) ::BeatSaber::Destinations::BeatmapCharacteristic _characteristic;

  /// @brief Field _difficulty, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__difficulty, put = __cordl_internal_set__difficulty)) ::GlobalNamespace::BeatmapDifficulty _difficulty;

  /// @brief Field _levelId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelId, put = __cordl_internal_set__levelId)) ::StringW _levelId;

  __declspec(property(get = get_characteristic)) ::BeatSaber::Destinations::BeatmapCharacteristic characteristic;

  __declspec(property(get = get_difficulty)) ::GlobalNamespace::BeatmapDifficulty difficulty;

  __declspec(property(get = get_levelId)) ::StringW levelId;

  static inline ::BeatSaber::Destinations::SerializableBeatmapKey* New_ctor(::BeatSaber::Destinations::BeatmapCharacteristic characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                                                            ::StringW levelId);

  /// @brief Method ToStruct, addr 0x3181754, size 0x68, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey ToStruct(::GlobalNamespace::BeatmapCharacteristicCollection* characteristicCollection);

  constexpr ::BeatSaber::Destinations::BeatmapCharacteristic const& __cordl_internal_get__characteristic() const;

  constexpr ::BeatSaber::Destinations::BeatmapCharacteristic& __cordl_internal_get__characteristic();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__difficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__difficulty();

  constexpr ::StringW const& __cordl_internal_get__levelId() const;

  constexpr ::StringW& __cordl_internal_get__levelId();

  constexpr void __cordl_internal_set__characteristic(::BeatSaber::Destinations::BeatmapCharacteristic value);

  constexpr void __cordl_internal_set__difficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set__levelId(::StringW value);

  /// @brief Method .ctor, addr 0x3181748, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Destinations::BeatmapCharacteristic characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty, ::StringW levelId);

  /// @brief Method get_characteristic, addr 0x3181730, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Destinations::BeatmapCharacteristic get_characteristic();

  /// @brief Method get_difficulty, addr 0x3181738, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_difficulty();

  /// @brief Method get_levelId, addr 0x3181740, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializableBeatmapKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializableBeatmapKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializableBeatmapKey(SerializableBeatmapKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializableBeatmapKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializableBeatmapKey(SerializableBeatmapKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22654 };

  /// @brief Field _characteristic, offset: 0x10, size: 0x4, def value: None
  ::BeatSaber::Destinations::BeatmapCharacteristic ____characteristic;

  /// @brief Field _difficulty, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____difficulty;

  /// @brief Field _levelId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____levelId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::SerializableBeatmapKey, ____characteristic) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::SerializableBeatmapKey, ____difficulty) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::SerializableBeatmapKey, ____levelId) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Destinations::SerializableBeatmapKey, 0x20>, "Size mismatch!");

} // namespace BeatSaber::Destinations
NEED_NO_BOX(::BeatSaber::Destinations::SerializableBeatmapKey);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Destinations::SerializableBeatmapKey*, "BeatSaber.Destinations", "SerializableBeatmapKey");
