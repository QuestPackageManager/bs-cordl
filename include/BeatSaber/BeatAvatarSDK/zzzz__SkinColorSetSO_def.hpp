#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/SkinColorSetSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
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
// Dependencies PersistentScriptableObject
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.SkinColorSetSO
class CORDL_TYPE SkinColorSetSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _colors, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__colors,
                      put = __cordl_internal_set__colors)) ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>>*>
      _colors;

  __declspec(property(get = get_colors)) ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>>*> colors;

  static inline ::BeatSaber::BeatAvatarSDK::SkinColorSetSO* New_ctor();

  constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>>*> const& __cordl_internal_get__colors() const;

  constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>>*>& __cordl_internal_get__colors();

  constexpr void __cordl_internal_set__colors(::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>>*> value);

  /// @brief Method .ctor, addr 0x31aed04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_colors, addr 0x31aecfc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>>*> get_colors();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkinColorSetSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SkinColorSetSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkinColorSetSO(SkinColorSetSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkinColorSetSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkinColorSetSO(SkinColorSetSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22084 };

  /// @brief Field _colors, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>>*> ____colors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarSDK::SkinColorSetSO, ____colors) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::SkinColorSetSO, 0x20>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::SkinColorSetSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::SkinColorSetSO*, "BeatSaber.BeatAvatarSDK", "SkinColorSetSO");
