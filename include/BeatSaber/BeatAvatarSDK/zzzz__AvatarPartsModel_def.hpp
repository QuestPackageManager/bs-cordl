#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarPartsModel)
namespace BeatSaber::BeatAvatarSDK {
class AvatarMeshPartSO;
}
namespace BeatSaber::BeatAvatarSDK {
template <typename T> class AvatarPartCollection_1;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarPartsModelSO;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarSpritePartSO;
}
namespace BeatSaber::BeatAvatarSDK {
class SkinColorSO;
}
namespace BeatSaber::BeatAvatarSDK {
class SkinColorSetSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class AvatarPartsModel;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarPartsModel);
// Type: BeatSaber.BeatAvatarSDK::AvatarPartsModel
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15684))
// CS Name: ::BeatSaber.BeatAvatarSDK::AvatarPartsModel*
class CORDL_TYPE AvatarPartsModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field <headTopCollection>k__BackingField, offset 0x10, size 0x8
  __declspec(
      property(get = __get__headTopCollection_k__BackingField,
               put = __set__headTopCollection_k__BackingField))::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* _headTopCollection_k__BackingField;

  /// @brief Field <eyesCollection>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__eyesCollection_k__BackingField,
                      put = __set__eyesCollection_k__BackingField))::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>* _eyesCollection_k__BackingField;

  /// @brief Field <mouthCollection>k__BackingField, offset 0x20, size 0x8
  __declspec(
      property(get = __get__mouthCollection_k__BackingField,
               put = __set__mouthCollection_k__BackingField))::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>* _mouthCollection_k__BackingField;

  /// @brief Field <glassesCollection>k__BackingField, offset 0x28, size 0x8
  __declspec(
      property(get = __get__glassesCollection_k__BackingField,
               put = __set__glassesCollection_k__BackingField))::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* _glassesCollection_k__BackingField;

  /// @brief Field <facialHairCollection>k__BackingField, offset 0x30, size 0x8
  __declspec(property(
      get = __get__facialHairCollection_k__BackingField,
      put = __set__facialHairCollection_k__BackingField))::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* _facialHairCollection_k__BackingField;

  /// @brief Field <handsCollection>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__handsCollection_k__BackingField,
                      put = __set__handsCollection_k__BackingField))::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* _handsCollection_k__BackingField;

  /// @brief Field <clothesCollection>k__BackingField, offset 0x40, size 0x8
  __declspec(
      property(get = __get__clothesCollection_k__BackingField,
               put = __set__clothesCollection_k__BackingField))::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* _clothesCollection_k__BackingField;

  /// @brief Field <skinColors>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __get__skinColors_k__BackingField,
                      put = __set__skinColors_k__BackingField))::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> _skinColors_k__BackingField;

  /// @brief Field _indexById, offset 0x50, size 0x8
  __declspec(property(get = __get__indexById, put = __set__indexById))::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* _indexById;

  __declspec(property(get = get_headTopCollection))::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* headTopCollection;

  __declspec(property(get = get_eyesCollection))::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>* eyesCollection;

  __declspec(property(get = get_mouthCollection))::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>* mouthCollection;

  __declspec(property(get = get_glassesCollection))::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* glassesCollection;

  __declspec(property(get = get_facialHairCollection))::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* facialHairCollection;

  __declspec(property(get = get_handsCollection))::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* handsCollection;

  __declspec(property(get = get_clothesCollection))::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* clothesCollection;

  __declspec(property(get = get_skinColors))::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> skinColors;

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*& __get__headTopCollection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> const&
  __get__headTopCollection_k__BackingField() const;

  constexpr void __set__headTopCollection_k__BackingField(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*& __get__eyesCollection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*> const&
  __get__eyesCollection_k__BackingField() const;

  constexpr void __set__eyesCollection_k__BackingField(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*& __get__mouthCollection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>*> const&
  __get__mouthCollection_k__BackingField() const;

  constexpr void __set__mouthCollection_k__BackingField(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*& __get__glassesCollection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> const&
  __get__glassesCollection_k__BackingField() const;

  constexpr void __set__glassesCollection_k__BackingField(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*& __get__facialHairCollection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> const&
  __get__facialHairCollection_k__BackingField() const;

  constexpr void __set__facialHairCollection_k__BackingField(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*& __get__handsCollection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> const&
  __get__handsCollection_k__BackingField() const;

  constexpr void __set__handsCollection_k__BackingField(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*& __get__clothesCollection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>*> const&
  __get__clothesCollection_k__BackingField() const;

  constexpr void __set__clothesCollection_k__BackingField(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* value);

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*>& __get__skinColors_k__BackingField();

  constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> const& __get__skinColors_k__BackingField() const;

  constexpr void __set__skinColors_k__BackingField(::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __get__indexById();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const& __get__indexById() const;

  constexpr void __set__indexById(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  /// @brief Method get_headTopCollection, addr 0xe19fa0, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* get_headTopCollection();

  /// @brief Method get_eyesCollection, addr 0xe19fa8, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>* get_eyesCollection();

  /// @brief Method get_mouthCollection, addr 0xe19fb0, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>* get_mouthCollection();

  /// @brief Method get_glassesCollection, addr 0xe19fb8, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* get_glassesCollection();

  /// @brief Method get_facialHairCollection, addr 0xe19fc0, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* get_facialHairCollection();

  /// @brief Method get_handsCollection, addr 0xe19fc8, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* get_handsCollection();

  /// @brief Method get_clothesCollection, addr 0xe19fd0, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* get_clothesCollection();

  /// @brief Method get_skinColors, addr 0xe19fd8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> get_skinColors();

  static inline ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* New_ctor(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO* avatarPartData, ::BeatSaber::BeatAvatarSDK::SkinColorSetSO* skinColorSet);

  /// @brief Method .ctor, addr 0xe19fe0, size 0x260, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO* avatarPartData, ::BeatSaber::BeatAvatarSDK::SkinColorSetSO* skinColorSet);

  /// @brief Method GetColorIndexById, addr 0xe1a240, size 0x84, virtual false, abstract: false, final false
  inline int32_t GetColorIndexById(::StringW id);

  /// @brief Method GetSkinColorById, addr 0xe1a2c4, size 0x34, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::SkinColorSO* GetSkinColorById(::StringW id);

  /// @brief Method GetRandomColor, addr 0xe19d88, size 0x40, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::SkinColorSO* GetRandomColor();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPartsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarPartsModel(AvatarPartsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPartsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarPartsModel(AvatarPartsModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarPartsModel();

public:
  /// @brief Field <headTopCollection>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* ____headTopCollection_k__BackingField;

  /// @brief Field <eyesCollection>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>* ____eyesCollection_k__BackingField;

  /// @brief Field <mouthCollection>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>* ____mouthCollection_k__BackingField;

  /// @brief Field <glassesCollection>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* ____glassesCollection_k__BackingField;

  /// @brief Field <facialHairCollection>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* ____facialHairCollection_k__BackingField;

  /// @brief Field <handsCollection>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* ____handsCollection_k__BackingField;

  /// @brief Field <clothesCollection>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*>* ____clothesCollection_k__BackingField;

  /// @brief Field <skinColors>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> ____skinColors_k__BackingField;

  /// @brief Field _indexById, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ____indexById;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarPartsModel, 0x58>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModel, ____headTopCollection_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModel, ____eyesCollection_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModel, ____mouthCollection_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModel, ____glassesCollection_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModel, ____facialHairCollection_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModel, ____handsCollection_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModel, ____clothesCollection_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModel, ____skinColors_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPartsModel, ____indexById) == 0x50, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::AvatarPartsModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarPartsModel*, "BeatSaber.BeatAvatarSDK", "AvatarPartsModel");
