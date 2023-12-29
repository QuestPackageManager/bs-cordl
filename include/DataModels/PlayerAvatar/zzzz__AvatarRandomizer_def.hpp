#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(AvatarRandomizer)
namespace GlobalNamespace {
class AvatarData;
}
namespace DataModels::PlayerAvatar {
class RandomizeAvatarColorMap;
}
namespace GlobalNamespace {
class AvatarPartsModel;
}
// Forward declare root types
namespace DataModels::PlayerAvatar {
class AvatarRandomizer;
}
// Write type traits
MARK_REF_PTR_T(::DataModels::PlayerAvatar::AvatarRandomizer);
// Type: DataModels.PlayerAvatar::AvatarRandomizer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace DataModels::PlayerAvatar {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6148))
// CS Name: ::DataModels.PlayerAvatar::AvatarRandomizer*
class CORDL_TYPE AvatarRandomizer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _randomizeColorsParamsCollection, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__randomizeColorsParamsCollection,
                             put = setStaticF__randomizeColorsParamsCollection))::ArrayW<::DataModels::PlayerAvatar::RandomizeAvatarColorMap*,
                                                                                         ::Array<::DataModels::PlayerAvatar::RandomizeAvatarColorMap*>*> _randomizeColorsParamsCollection;

  static inline void setStaticF__randomizeColorsParamsCollection(::ArrayW<::DataModels::PlayerAvatar::RandomizeAvatarColorMap*, ::Array<::DataModels::PlayerAvatar::RandomizeAvatarColorMap*>*> value);

  static inline ::ArrayW<::DataModels::PlayerAvatar::RandomizeAvatarColorMap*, ::Array<::DataModels::PlayerAvatar::RandomizeAvatarColorMap*>*> getStaticF__randomizeColorsParamsCollection();

  /// @brief Method RandomizeAll addr 0x21e691c size 0x6c virtual false final false
  static inline void RandomizeAll(::GlobalNamespace::AvatarData* avatarData, ::GlobalNamespace::AvatarPartsModel* avatarPartsModel);

  /// @brief Method RandomizeModels addr 0x21e6988 size 0x15c virtual false final false
  static inline void RandomizeModels(::GlobalNamespace::AvatarData* avatarData, ::GlobalNamespace::AvatarPartsModel* avatarPartsModel);

  /// @brief Method RandomizeColors addr 0x21e6ae4 size 0x29c virtual false final false
  static inline void RandomizeColors(::GlobalNamespace::AvatarData* avatarData);

  // Ctor Parameters [CppParam { name: "", ty: "AvatarRandomizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarRandomizer(AvatarRandomizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarRandomizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarRandomizer(AvatarRandomizer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarRandomizer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DataModels::PlayerAvatar::AvatarRandomizer, 0x10>, "Size mismatch!");

} // namespace DataModels::PlayerAvatar
NEED_NO_BOX(::DataModels::PlayerAvatar::AvatarRandomizer);
DEFINE_IL2CPP_ARG_TYPE(::DataModels::PlayerAvatar::AvatarRandomizer*, "DataModels.PlayerAvatar", "AvatarRandomizer");
