#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/AvatarPartsModelSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(AvatarPartsModelSO)
namespace BeatSaber::BeatAvatarSDK {
class AvatarMeshPartSO;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarSpritePartSO;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class AvatarPartsModelSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO);
// Dependencies PersistentScriptableObject
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.AvatarPartsModelSO
class CORDL_TYPE AvatarPartsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_Clothes)) ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> Clothes;

  __declspec(property(get = get_Eyes)) ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>>*> Eyes;

  __declspec(property(get = get_FacialHair)) ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> FacialHair;

  __declspec(property(get = get_Glasses)) ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> Glasses;

  __declspec(property(get = get_Hands)) ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> Hands;

  __declspec(property(get = get_Mouths)) ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>>*> Mouths;

  /// @brief Field _clothes, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__clothes,
                      put = __cordl_internal_set__clothes)) ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*>
      _clothes;

  /// @brief Field _eyes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__eyes,
                      put = __cordl_internal_set__eyes)) ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>>*>
      _eyes;

  /// @brief Field _facialHair, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__facialHair,
                      put = __cordl_internal_set__facialHair)) ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*>
      _facialHair;

  /// @brief Field _glasses, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__glasses,
                      put = __cordl_internal_set__glasses)) ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*>
      _glasses;

  /// @brief Field _hands, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__hands,
                      put = __cordl_internal_set__hands)) ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*>
      _hands;

  /// @brief Field _headTops, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__headTops,
                      put = __cordl_internal_set__headTops)) ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*>
      _headTops;

  /// @brief Field _mouths, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mouths,
                      put = __cordl_internal_set__mouths)) ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>>*>
      _mouths;

  __declspec(property(get = get_headTops)) ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> headTops;

  static inline ::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO* New_ctor();

  constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> const& __cordl_internal_get__clothes() const;

  constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*>& __cordl_internal_get__clothes();

  constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>>*> const& __cordl_internal_get__eyes() const;

  constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>>*>& __cordl_internal_get__eyes();

  constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> const& __cordl_internal_get__facialHair() const;

  constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*>& __cordl_internal_get__facialHair();

  constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> const& __cordl_internal_get__glasses() const;

  constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*>& __cordl_internal_get__glasses();

  constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> const& __cordl_internal_get__hands() const;

  constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*>& __cordl_internal_get__hands();

  constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> const& __cordl_internal_get__headTops() const;

  constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*>& __cordl_internal_get__headTops();

  constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>>*> const& __cordl_internal_get__mouths() const;

  constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>>*>& __cordl_internal_get__mouths();

  constexpr void __cordl_internal_set__clothes(::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> value);

  constexpr void __cordl_internal_set__eyes(::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>>*> value);

  constexpr void __cordl_internal_set__facialHair(::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> value);

  constexpr void __cordl_internal_set__glasses(::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> value);

  constexpr void __cordl_internal_set__hands(::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> value);

  constexpr void __cordl_internal_set__headTops(::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> value);

  constexpr void __cordl_internal_set__mouths(::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>>*> value);

  /// @brief Method .ctor, addr 0x2259570, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Clothes, addr 0x2259568, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> get_Clothes();

  /// @brief Method get_Eyes, addr 0x2259540, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>>*> get_Eyes();

  /// @brief Method get_FacialHair, addr 0x2259558, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> get_FacialHair();

  /// @brief Method get_Glasses, addr 0x2259550, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> get_Glasses();

  /// @brief Method get_Hands, addr 0x2259560, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> get_Hands();

  /// @brief Method get_Mouths, addr 0x2259548, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>>*> get_Mouths();

  /// @brief Method get_headTops, addr 0x2259538, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> get_headTops();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarPartsModelSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarPartsModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarPartsModelSO(AvatarPartsModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPartsModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarPartsModelSO(AvatarPartsModelSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18147 };

  /// @brief Field _headTops, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> ____headTops;

  /// @brief Field _eyes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>>*> ____eyes;

  /// @brief Field _mouths, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO>>*> ____mouths;

  /// @brief Field _glasses, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> ____glasses;

  /// @brief Field _facialHair, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> ____facialHair;

  /// @brief Field _hands, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> ____hands;

  /// @brief Field _clothes, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO>>*> ____clothes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO, ____headTops) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO, ____eyes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO, ____mouths) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO, ____glasses) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO, ____facialHair) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO, ____hands) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO, ____clothes) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO, 0x50>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO*, "BeatSaber.BeatAvatarSDK", "AvatarPartsModelSO");
