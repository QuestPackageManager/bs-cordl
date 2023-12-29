#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarPartsModel)
namespace GlobalNamespace {
class AvatarSpritePartSO;
}
namespace GlobalNamespace {
class SkinColorSO;
}
namespace GlobalNamespace {
class AvatarMeshPartSO;
}
namespace GlobalNamespace {
class SkinColorSetSO;
}
namespace GlobalNamespace {
class AvatarPartsModelSO;
}
namespace GlobalNamespace {
template <typename T> class AvatarPartCollection_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarPartsModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarPartsModel);
// Type: ::AvatarPartsModel
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4775))
// CS Name: ::AvatarPartsModel*
class CORDL_TYPE AvatarPartsModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field <headTopCollection>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__headTopCollection_k__BackingField,
                      put = __set__headTopCollection_k__BackingField))::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* _headTopCollection_k__BackingField;

  /// @brief Field <eyesCollection>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__eyesCollection_k__BackingField,
                      put = __set__eyesCollection_k__BackingField))::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarSpritePartSO*>* _eyesCollection_k__BackingField;

  /// @brief Field <mouthCollection>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__mouthCollection_k__BackingField,
                      put = __set__mouthCollection_k__BackingField))::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarSpritePartSO*>* _mouthCollection_k__BackingField;

  /// @brief Field <glassesCollection>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__glassesCollection_k__BackingField,
                      put = __set__glassesCollection_k__BackingField))::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* _glassesCollection_k__BackingField;

  /// @brief Field <facialHairCollection>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__facialHairCollection_k__BackingField,
                      put = __set__facialHairCollection_k__BackingField))::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* _facialHairCollection_k__BackingField;

  /// @brief Field <handsCollection>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__handsCollection_k__BackingField,
                      put = __set__handsCollection_k__BackingField))::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* _handsCollection_k__BackingField;

  /// @brief Field <clothesCollection>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __get__clothesCollection_k__BackingField,
                      put = __set__clothesCollection_k__BackingField))::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* _clothesCollection_k__BackingField;

  /// @brief Field <skinColors>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __get__skinColors_k__BackingField,
                      put = __set__skinColors_k__BackingField))::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> _skinColors_k__BackingField;

  /// @brief Field _indexById, offset 0x50, size 0x8
  __declspec(property(get = __get__indexById, put = __set__indexById))::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* _indexById;

  __declspec(property(get = get_headTopCollection))::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* headTopCollection;

  __declspec(property(get = get_eyesCollection))::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarSpritePartSO*>* eyesCollection;

  __declspec(property(get = get_mouthCollection))::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarSpritePartSO*>* mouthCollection;

  __declspec(property(get = get_glassesCollection))::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* glassesCollection;

  __declspec(property(get = get_facialHairCollection))::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* facialHairCollection;

  __declspec(property(get = get_handsCollection))::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* handsCollection;

  __declspec(property(get = get_clothesCollection))::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* clothesCollection;

  __declspec(property(get = get_skinColors))::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> skinColors;

  constexpr ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>*& __get__headTopCollection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>*> const& __get__headTopCollection_k__BackingField() const;

  constexpr void __set__headTopCollection_k__BackingField(::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* value);

  constexpr ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarSpritePartSO*>*& __get__eyesCollection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarSpritePartSO*>*> const& __get__eyesCollection_k__BackingField() const;

  constexpr void __set__eyesCollection_k__BackingField(::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarSpritePartSO*>* value);

  constexpr ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarSpritePartSO*>*& __get__mouthCollection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarSpritePartSO*>*> const& __get__mouthCollection_k__BackingField() const;

  constexpr void __set__mouthCollection_k__BackingField(::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarSpritePartSO*>* value);

  constexpr ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>*& __get__glassesCollection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>*> const& __get__glassesCollection_k__BackingField() const;

  constexpr void __set__glassesCollection_k__BackingField(::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* value);

  constexpr ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>*& __get__facialHairCollection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>*> const& __get__facialHairCollection_k__BackingField() const;

  constexpr void __set__facialHairCollection_k__BackingField(::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* value);

  constexpr ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>*& __get__handsCollection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>*> const& __get__handsCollection_k__BackingField() const;

  constexpr void __set__handsCollection_k__BackingField(::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* value);

  constexpr ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>*& __get__clothesCollection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>*> const& __get__clothesCollection_k__BackingField() const;

  constexpr void __set__clothesCollection_k__BackingField(::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* value);

  constexpr ::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*>& __get__skinColors_k__BackingField();

  constexpr ::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> const& __get__skinColors_k__BackingField() const;

  constexpr void __set__skinColors_k__BackingField(::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __get__indexById();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const& __get__indexById() const;

  constexpr void __set__indexById(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  /// @brief Method get_headTopCollection addr 0x223e860 size 0x8 virtual false final false
  inline ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* get_headTopCollection();

  /// @brief Method get_eyesCollection addr 0x223e868 size 0x8 virtual false final false
  inline ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarSpritePartSO*>* get_eyesCollection();

  /// @brief Method get_mouthCollection addr 0x223e870 size 0x8 virtual false final false
  inline ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarSpritePartSO*>* get_mouthCollection();

  /// @brief Method get_glassesCollection addr 0x223e878 size 0x8 virtual false final false
  inline ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* get_glassesCollection();

  /// @brief Method get_facialHairCollection addr 0x223e880 size 0x8 virtual false final false
  inline ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* get_facialHairCollection();

  /// @brief Method get_handsCollection addr 0x223e888 size 0x8 virtual false final false
  inline ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* get_handsCollection();

  /// @brief Method get_clothesCollection addr 0x223e890 size 0x8 virtual false final false
  inline ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* get_clothesCollection();

  /// @brief Method get_skinColors addr 0x223e898 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> get_skinColors();

  static inline ::GlobalNamespace::AvatarPartsModel* New_ctor(::GlobalNamespace::AvatarPartsModelSO* avatarPartData, ::GlobalNamespace::SkinColorSetSO* skinColorSet);

  /// @brief Method .ctor addr 0x223e8a0 size 0x260 virtual false final false
  inline void _ctor(::GlobalNamespace::AvatarPartsModelSO* avatarPartData, ::GlobalNamespace::SkinColorSetSO* skinColorSet);

  /// @brief Method GetColorIndexById addr 0x223eb00 size 0x84 virtual false final false
  inline int32_t GetColorIndexById(::StringW id);

  /// @brief Method GetSkinColorById addr 0x223eb84 size 0x34 virtual false final false
  inline ::GlobalNamespace::SkinColorSO* GetSkinColorById(::StringW id);

  /// @brief Method GetRandomColor addr 0x223cd84 size 0x40 virtual false final false
  inline ::GlobalNamespace::SkinColorSO* GetRandomColor();

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
  ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* ____headTopCollection_k__BackingField;

  /// @brief Field <eyesCollection>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarSpritePartSO*>* ____eyesCollection_k__BackingField;

  /// @brief Field <mouthCollection>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarSpritePartSO*>* ____mouthCollection_k__BackingField;

  /// @brief Field <glassesCollection>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* ____glassesCollection_k__BackingField;

  /// @brief Field <facialHairCollection>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* ____facialHairCollection_k__BackingField;

  /// @brief Field <handsCollection>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* ____handsCollection_k__BackingField;

  /// @brief Field <clothesCollection>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::AvatarPartCollection_1<::GlobalNamespace::AvatarMeshPartSO*>* ____clothesCollection_k__BackingField;

  /// @brief Field <skinColors>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SkinColorSO*, ::Array<::GlobalNamespace::SkinColorSO*>*> ____skinColors_k__BackingField;

  /// @brief Field _indexById, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ____indexById;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarPartsModel, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPartsModel, ____headTopCollection_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPartsModel, ____eyesCollection_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPartsModel, ____mouthCollection_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPartsModel, ____glassesCollection_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPartsModel, ____facialHairCollection_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPartsModel, ____handsCollection_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPartsModel, ____clothesCollection_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPartsModel, ____skinColors_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPartsModel, ____indexById) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarPartsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarPartsModel*, "", "AvatarPartsModel");
