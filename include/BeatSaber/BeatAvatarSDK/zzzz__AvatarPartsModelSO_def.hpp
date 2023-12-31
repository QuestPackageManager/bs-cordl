#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: BeatSaber.BeatAvatarSDK::AvatarPartsModelSO
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15686))
// CS Name: ::BeatSaber.BeatAvatarSDK::AvatarPartsModelSO*
class CORDL_TYPE AvatarPartsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _headTops, offset 0x18, size 0x8
  __declspec(property(get = __get__headTops, put = __set__headTops))::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> _headTops;

  /// @brief Field _eyes, offset 0x20, size 0x8
  __declspec(property(get = __get__eyes, put = __set__eyes))::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*> _eyes;

  /// @brief Field _mouths, offset 0x28, size 0x8
  __declspec(property(get = __get__mouths, put = __set__mouths))::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*> _mouths;

  /// @brief Field _glasses, offset 0x30, size 0x8
  __declspec(property(get = __get__glasses, put = __set__glasses))::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> _glasses;

  /// @brief Field _facialHair, offset 0x38, size 0x8
  __declspec(property(get = __get__facialHair, put = __set__facialHair))::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> _facialHair;

  /// @brief Field _hands, offset 0x40, size 0x8
  __declspec(property(get = __get__hands, put = __set__hands))::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> _hands;

  /// @brief Field _clothes, offset 0x48, size 0x8
  __declspec(property(get = __get__clothes, put = __set__clothes))::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> _clothes;

  __declspec(property(get = get_headTops))::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> headTops;

  __declspec(property(get = get_Eyes))::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*> Eyes;

  __declspec(property(get = get_Mouths))::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*> Mouths;

  __declspec(property(get = get_Glasses))::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> Glasses;

  __declspec(property(get = get_FacialHair))::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> FacialHair;

  __declspec(property(get = get_Hands))::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> Hands;

  __declspec(property(get = get_Clothes))::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> Clothes;

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*>& __get__headTops();

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> const& __get__headTops() const;

  constexpr void __set__headTops(::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> value);

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*>& __get__eyes();

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*> const& __get__eyes() const;

  constexpr void __set__eyes(::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*> value);

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*>& __get__mouths();

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*> const& __get__mouths() const;

  constexpr void __set__mouths(::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*> value);

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*>& __get__glasses();

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> const& __get__glasses() const;

  constexpr void __set__glasses(::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> value);

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*>& __get__facialHair();

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> const& __get__facialHair() const;

  constexpr void __set__facialHair(::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> value);

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*>& __get__hands();

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> const& __get__hands() const;

  constexpr void __set__hands(::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> value);

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*>& __get__clothes();

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> const& __get__clothes() const;

  constexpr void __set__clothes(::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> value);

  /// @brief Method get_headTops, addr 0xe1a2f8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> get_headTops();

  /// @brief Method get_Eyes, addr 0xe1a300, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*> get_Eyes();

  /// @brief Method get_Mouths, addr 0xe1a308, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*> get_Mouths();

  /// @brief Method get_Glasses, addr 0xe1a310, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> get_Glasses();

  /// @brief Method get_FacialHair, addr 0xe1a318, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> get_FacialHair();

  /// @brief Method get_Hands, addr 0xe1a320, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> get_Hands();

  /// @brief Method get_Clothes, addr 0xe1a328, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> get_Clothes();

  static inline ::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO* New_ctor();

  /// @brief Method .ctor, addr 0xe1a330, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPartsModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarPartsModelSO(AvatarPartsModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPartsModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarPartsModelSO(AvatarPartsModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarPartsModelSO();

public:
  /// @brief Field _headTops, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> ____headTops;

  /// @brief Field _eyes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*> ____eyes;

  /// @brief Field _mouths, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*> ____mouths;

  /// @brief Field _glasses, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> ____glasses;

  /// @brief Field _facialHair, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> ____facialHair;

  /// @brief Field _hands, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> ____hands;

  /// @brief Field _clothes, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, ::Array<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> ____clothes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO, 0x50>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO, ____headTops) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO, ____eyes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO, ____mouths) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO, ____glasses) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO, ____facialHair) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO, ____hands) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO, ____clothes) == 0x48, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO*, "BeatSaber.BeatAvatarSDK", "AvatarPartsModelSO");
