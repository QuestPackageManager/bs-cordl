#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(AvatarPartsModelSO)
namespace GlobalNamespace {
class AvatarSpritePartSO;
}
namespace GlobalNamespace {
class AvatarMeshPartSO;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarPartsModelSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarPartsModelSO);
// Type: ::AvatarPartsModelSO
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4777))
// CS Name: ::AvatarPartsModelSO*
class CORDL_TYPE AvatarPartsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _headTops, offset 0x18, size 0x8
  __declspec(property(get = __get__headTops, put = __set__headTops))::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> _headTops;

  /// @brief Field _eyes, offset 0x20, size 0x8
  __declspec(property(get = __get__eyes, put = __set__eyes))::ArrayW<::GlobalNamespace::AvatarSpritePartSO*, ::Array<::GlobalNamespace::AvatarSpritePartSO*>*> _eyes;

  /// @brief Field _mouths, offset 0x28, size 0x8
  __declspec(property(get = __get__mouths, put = __set__mouths))::ArrayW<::GlobalNamespace::AvatarSpritePartSO*, ::Array<::GlobalNamespace::AvatarSpritePartSO*>*> _mouths;

  /// @brief Field _glasses, offset 0x30, size 0x8
  __declspec(property(get = __get__glasses, put = __set__glasses))::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> _glasses;

  /// @brief Field _facialHair, offset 0x38, size 0x8
  __declspec(property(get = __get__facialHair, put = __set__facialHair))::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> _facialHair;

  /// @brief Field _hands, offset 0x40, size 0x8
  __declspec(property(get = __get__hands, put = __set__hands))::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> _hands;

  /// @brief Field _clothes, offset 0x48, size 0x8
  __declspec(property(get = __get__clothes, put = __set__clothes))::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> _clothes;

  __declspec(property(get = get_headTops))::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> headTops;

  __declspec(property(get = get_Eyes))::ArrayW<::GlobalNamespace::AvatarSpritePartSO*, ::Array<::GlobalNamespace::AvatarSpritePartSO*>*> Eyes;

  __declspec(property(get = get_Mouths))::ArrayW<::GlobalNamespace::AvatarSpritePartSO*, ::Array<::GlobalNamespace::AvatarSpritePartSO*>*> Mouths;

  __declspec(property(get = get_Glasses))::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> Glasses;

  __declspec(property(get = get_FacialHair))::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> FacialHair;

  __declspec(property(get = get_Hands))::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> Hands;

  __declspec(property(get = get_Clothes))::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> Clothes;

  constexpr ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*>& __get__headTops();

  constexpr ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> const& __get__headTops() const;

  constexpr void __set__headTops(::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::AvatarSpritePartSO*, ::Array<::GlobalNamespace::AvatarSpritePartSO*>*>& __get__eyes();

  constexpr ::ArrayW<::GlobalNamespace::AvatarSpritePartSO*, ::Array<::GlobalNamespace::AvatarSpritePartSO*>*> const& __get__eyes() const;

  constexpr void __set__eyes(::ArrayW<::GlobalNamespace::AvatarSpritePartSO*, ::Array<::GlobalNamespace::AvatarSpritePartSO*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::AvatarSpritePartSO*, ::Array<::GlobalNamespace::AvatarSpritePartSO*>*>& __get__mouths();

  constexpr ::ArrayW<::GlobalNamespace::AvatarSpritePartSO*, ::Array<::GlobalNamespace::AvatarSpritePartSO*>*> const& __get__mouths() const;

  constexpr void __set__mouths(::ArrayW<::GlobalNamespace::AvatarSpritePartSO*, ::Array<::GlobalNamespace::AvatarSpritePartSO*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*>& __get__glasses();

  constexpr ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> const& __get__glasses() const;

  constexpr void __set__glasses(::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*>& __get__facialHair();

  constexpr ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> const& __get__facialHair() const;

  constexpr void __set__facialHair(::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*>& __get__hands();

  constexpr ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> const& __get__hands() const;

  constexpr void __set__hands(::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*>& __get__clothes();

  constexpr ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> const& __get__clothes() const;

  constexpr void __set__clothes(::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> value);

  /// @brief Method get_headTops addr 0x223ebb8 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> get_headTops();

  /// @brief Method get_Eyes addr 0x223ebc0 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::AvatarSpritePartSO*, ::Array<::GlobalNamespace::AvatarSpritePartSO*>*> get_Eyes();

  /// @brief Method get_Mouths addr 0x223ebc8 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::AvatarSpritePartSO*, ::Array<::GlobalNamespace::AvatarSpritePartSO*>*> get_Mouths();

  /// @brief Method get_Glasses addr 0x223ebd0 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> get_Glasses();

  /// @brief Method get_FacialHair addr 0x223ebd8 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> get_FacialHair();

  /// @brief Method get_Hands addr 0x223ebe0 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> get_Hands();

  /// @brief Method get_Clothes addr 0x223ebe8 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> get_Clothes();

  static inline ::GlobalNamespace::AvatarPartsModelSO* New_ctor();

  /// @brief Method .ctor addr 0x223ebf0 size 0x8 virtual false final false
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
  ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> ____headTops;

  /// @brief Field _eyes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::AvatarSpritePartSO*, ::Array<::GlobalNamespace::AvatarSpritePartSO*>*> ____eyes;

  /// @brief Field _mouths, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::AvatarSpritePartSO*, ::Array<::GlobalNamespace::AvatarSpritePartSO*>*> ____mouths;

  /// @brief Field _glasses, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> ____glasses;

  /// @brief Field _facialHair, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> ____facialHair;

  /// @brief Field _hands, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> ____hands;

  /// @brief Field _clothes, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*, ::Array<::GlobalNamespace::AvatarMeshPartSO*>*> ____clothes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarPartsModelSO, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPartsModelSO, ____headTops) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPartsModelSO, ____eyes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPartsModelSO, ____mouths) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPartsModelSO, ____glasses) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPartsModelSO, ____facialHair) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPartsModelSO, ____hands) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPartsModelSO, ____clothes) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarPartsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarPartsModelSO*, "", "AvatarPartsModelSO");
