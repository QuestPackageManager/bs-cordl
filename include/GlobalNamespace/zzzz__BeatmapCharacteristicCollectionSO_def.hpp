#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapCharacteristicCollectionSO)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicCollectionSO);
// Type: ::BeatmapCharacteristicCollectionSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4272))
// CS Name: ::BeatmapCharacteristicCollectionSO*
class CORDL_TYPE BeatmapCharacteristicCollectionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _ignore360MovementCharacteristics, offset 0x18, size 0x1
  __declspec(property(get = __get__ignore360MovementCharacteristics, put = __set__ignore360MovementCharacteristics)) bool _ignore360MovementCharacteristics;

  /// @brief Field _beatmapCharacteristics, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapCharacteristics,
                      put = __set__beatmapCharacteristics))::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> _beatmapCharacteristics;

  /// @brief Field _no360beatmapCharacteristics, offset 0x28, size 0x8
  __declspec(
      property(get = __get__no360beatmapCharacteristics,
               put = __set__no360beatmapCharacteristics))::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> _no360beatmapCharacteristics;

  __declspec(property(get = get_beatmapCharacteristics))::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> beatmapCharacteristics;

  constexpr bool& __get__ignore360MovementCharacteristics();

  constexpr bool const& __get__ignore360MovementCharacteristics() const;

  constexpr void __set__ignore360MovementCharacteristics(bool value);

  constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>& __get__beatmapCharacteristics();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> const& __get__beatmapCharacteristics() const;

  constexpr void __set__beatmapCharacteristics(::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>& __get__no360beatmapCharacteristics();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> const& __get__no360beatmapCharacteristics() const;

  constexpr void __set__no360beatmapCharacteristics(::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> value);

  /// @brief Method get_beatmapCharacteristics addr 0x21dbf10 size 0x1c virtual false final false
  inline ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> get_beatmapCharacteristics();

  /// @brief Method OnEnable addr 0x21dbf2c size 0x2c virtual true final false
  inline void OnEnable();

  /// @brief Method GetBeatmapCharacteristicBySerializedName addr 0x21ceb18 size 0x80 virtual false final false
  inline ::GlobalNamespace::BeatmapCharacteristicSO* GetBeatmapCharacteristicBySerializedName(::StringW serializedName);

  /// @brief Method ContainsBeatmapCharacteristic addr 0x21dbf78 size 0xc8 virtual false final false
  inline bool ContainsBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method InitData addr 0x21dbf58 size 0x20 virtual false final false
  inline void InitData();

  /// @brief Method GetCharacteristicsWithout360Movement addr 0x21dc040 size 0x128 virtual false final false
  inline ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> GetCharacteristicsWithout360Movement();

  static inline ::GlobalNamespace::BeatmapCharacteristicCollectionSO* New_ctor();

  /// @brief Method .ctor addr 0x21dc168 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicCollectionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicCollectionSO(BeatmapCharacteristicCollectionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicCollectionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicCollectionSO(BeatmapCharacteristicCollectionSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicCollectionSO();

public:
  /// @brief Field _ignore360MovementCharacteristics, offset: 0x18, size: 0x1, def value: None
  bool ____ignore360MovementCharacteristics;

  /// @brief Field _beatmapCharacteristics, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> ____beatmapCharacteristics;

  /// @brief Field _no360beatmapCharacteristics, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> ____no360beatmapCharacteristics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicCollectionSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicCollectionSO, ____ignore360MovementCharacteristics) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicCollectionSO, ____beatmapCharacteristics) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicCollectionSO, ____no360beatmapCharacteristics) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicCollectionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicCollectionSO*, "", "BeatmapCharacteristicCollectionSO");
