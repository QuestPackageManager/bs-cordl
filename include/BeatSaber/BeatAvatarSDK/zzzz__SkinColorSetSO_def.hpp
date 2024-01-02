#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SkinColorSetSO)
namespace BeatSaber::BeatAvatarSDK {
class SkinColorSO;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class SkinColorSetSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::SkinColorSetSO);
// Type: BeatSaber.BeatAvatarSDK::SkinColorSetSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15701))
// CS Name: ::BeatSaber.BeatAvatarSDK::SkinColorSetSO*
class CORDL_TYPE SkinColorSetSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _colors, offset 0x18, size 0x8
  __declspec(property(get = __get__colors, put = __set__colors))::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> _colors;

  __declspec(property(get = get_colors))::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> colors;

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*>& __get__colors();

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> const& __get__colors() const;

  constexpr void __set__colors(::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> value);

  /// @brief Method get_colors, addr 0xe1c550, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> get_colors();

  static inline ::BeatSaber::BeatAvatarSDK::SkinColorSetSO* New_ctor();

  /// @brief Method .ctor, addr 0xe1c558, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SkinColorSetSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkinColorSetSO(SkinColorSetSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkinColorSetSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkinColorSetSO(SkinColorSetSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkinColorSetSO();

public:
  /// @brief Field _colors, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> ____colors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::SkinColorSetSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::SkinColorSetSO, ____colors) == 0x18, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::SkinColorSetSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::SkinColorSetSO*, "BeatSaber.BeatAvatarSDK", "SkinColorSetSO");
