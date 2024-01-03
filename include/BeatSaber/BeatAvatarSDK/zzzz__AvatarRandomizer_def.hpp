#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(AvatarRandomizer)
namespace BeatSaber::BeatAvatarSDK {
class AvatarData;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarPartsModel;
}
namespace BeatSaber::BeatAvatarSDK {
class RandomizeAvatarColorMap;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class AvatarRandomizer;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarRandomizer);
// Type: BeatSaber.BeatAvatarSDK::AvatarRandomizer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15689))
// CS Name: ::BeatSaber.BeatAvatarSDK::AvatarRandomizer*
class CORDL_TYPE AvatarRandomizer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _randomizeColorsParamsCollection, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__randomizeColorsParamsCollection,
                             put = setStaticF__randomizeColorsParamsCollection))::ArrayW<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*,
                                                                                         ::Array<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>*> _randomizeColorsParamsCollection;

  static inline void setStaticF__randomizeColorsParamsCollection(::ArrayW<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*, ::Array<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>*> value);

  static inline ::ArrayW<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*, ::Array<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>*> getStaticF__randomizeColorsParamsCollection();

  /// @brief Method RandomizeAll, addr 0xe19dc8, size 0x6c, virtual false, abstract: false, final false
  static inline void RandomizeAll(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData, ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* avatarPartsModel);

  /// @brief Method RandomizeModels, addr 0xe1abc0, size 0x15c, virtual false, abstract: false, final false
  static inline void RandomizeModels(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData, ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* avatarPartsModel);

  /// @brief Method RandomizeColors, addr 0xe1ad1c, size 0x29c, virtual false, abstract: false, final false
  static inline void RandomizeColors(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData);

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
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarRandomizer, 0x10>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::AvatarRandomizer);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarRandomizer*, "BeatSaber.BeatAvatarSDK", "AvatarRandomizer");
