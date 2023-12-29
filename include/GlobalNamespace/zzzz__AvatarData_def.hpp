#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AvatarData)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarData);
// Type: ::AvatarData
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10178)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4771))
// CS Name: ::AvatarData*
class CORDL_TYPE AvatarData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <headTopId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__headTopId_k__BackingField, put = __set__headTopId_k__BackingField))::StringW _headTopId_k__BackingField;

  /// @brief Field <glassesId>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__glassesId_k__BackingField, put = __set__glassesId_k__BackingField))::StringW _glassesId_k__BackingField;

  /// @brief Field <facialHairId>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__facialHairId_k__BackingField, put = __set__facialHairId_k__BackingField))::StringW _facialHairId_k__BackingField;

  /// @brief Field <handsId>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__handsId_k__BackingField, put = __set__handsId_k__BackingField))::StringW _handsId_k__BackingField;

  /// @brief Field <clothesId>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__clothesId_k__BackingField, put = __set__clothesId_k__BackingField))::StringW _clothesId_k__BackingField;

  /// @brief Field <eyesId>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__eyesId_k__BackingField, put = __set__eyesId_k__BackingField))::StringW _eyesId_k__BackingField;

  /// @brief Field <mouthId>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __get__mouthId_k__BackingField, put = __set__mouthId_k__BackingField))::StringW _mouthId_k__BackingField;

  /// @brief Field <headTopPrimaryColor>k__BackingField, offset 0x48, size 0x10
  __declspec(property(get = __get__headTopPrimaryColor_k__BackingField, put = __set__headTopPrimaryColor_k__BackingField))::UnityEngine::Color _headTopPrimaryColor_k__BackingField;

  /// @brief Field <headTopSecondaryColor>k__BackingField, offset 0x58, size 0x10
  __declspec(property(get = __get__headTopSecondaryColor_k__BackingField, put = __set__headTopSecondaryColor_k__BackingField))::UnityEngine::Color _headTopSecondaryColor_k__BackingField;

  /// @brief Field <glassesColor>k__BackingField, offset 0x68, size 0x10
  __declspec(property(get = __get__glassesColor_k__BackingField, put = __set__glassesColor_k__BackingField))::UnityEngine::Color _glassesColor_k__BackingField;

  /// @brief Field <facialHairColor>k__BackingField, offset 0x78, size 0x10
  __declspec(property(get = __get__facialHairColor_k__BackingField, put = __set__facialHairColor_k__BackingField))::UnityEngine::Color _facialHairColor_k__BackingField;

  /// @brief Field <handsColor>k__BackingField, offset 0x88, size 0x10
  __declspec(property(get = __get__handsColor_k__BackingField, put = __set__handsColor_k__BackingField))::UnityEngine::Color _handsColor_k__BackingField;

  /// @brief Field <clothesPrimaryColor>k__BackingField, offset 0x98, size 0x10
  __declspec(property(get = __get__clothesPrimaryColor_k__BackingField, put = __set__clothesPrimaryColor_k__BackingField))::UnityEngine::Color _clothesPrimaryColor_k__BackingField;

  /// @brief Field <clothesSecondaryColor>k__BackingField, offset 0xa8, size 0x10
  __declspec(property(get = __get__clothesSecondaryColor_k__BackingField, put = __set__clothesSecondaryColor_k__BackingField))::UnityEngine::Color _clothesSecondaryColor_k__BackingField;

  /// @brief Field <clothesDetailColor>k__BackingField, offset 0xb8, size 0x10
  __declspec(property(get = __get__clothesDetailColor_k__BackingField, put = __set__clothesDetailColor_k__BackingField))::UnityEngine::Color _clothesDetailColor_k__BackingField;

  /// @brief Field <skinColorId>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __get__skinColorId_k__BackingField, put = __set__skinColorId_k__BackingField))::StringW _skinColorId_k__BackingField;

  __declspec(property(get = get_headTopId, put = set_headTopId))::StringW headTopId;

  __declspec(property(get = get_glassesId, put = set_glassesId))::StringW glassesId;

  __declspec(property(get = get_facialHairId, put = set_facialHairId))::StringW facialHairId;

  __declspec(property(get = get_handsId, put = set_handsId))::StringW handsId;

  __declspec(property(get = get_clothesId, put = set_clothesId))::StringW clothesId;

  __declspec(property(get = get_eyesId, put = set_eyesId))::StringW eyesId;

  __declspec(property(get = get_mouthId, put = set_mouthId))::StringW mouthId;

  __declspec(property(get = get_headTopPrimaryColor, put = set_headTopPrimaryColor))::UnityEngine::Color headTopPrimaryColor;

  __declspec(property(get = get_headTopSecondaryColor, put = set_headTopSecondaryColor))::UnityEngine::Color headTopSecondaryColor;

  __declspec(property(get = get_glassesColor, put = set_glassesColor))::UnityEngine::Color glassesColor;

  __declspec(property(get = get_facialHairColor, put = set_facialHairColor))::UnityEngine::Color facialHairColor;

  __declspec(property(get = get_handsColor, put = set_handsColor))::UnityEngine::Color handsColor;

  __declspec(property(get = get_clothesPrimaryColor, put = set_clothesPrimaryColor))::UnityEngine::Color clothesPrimaryColor;

  __declspec(property(get = get_clothesSecondaryColor, put = set_clothesSecondaryColor))::UnityEngine::Color clothesSecondaryColor;

  __declspec(property(get = get_clothesDetailColor, put = set_clothesDetailColor))::UnityEngine::Color clothesDetailColor;

  __declspec(property(get = get_skinColorId, put = set_skinColorId))::StringW skinColorId;

  constexpr ::StringW& __get__headTopId_k__BackingField();

  constexpr ::StringW const& __get__headTopId_k__BackingField() const;

  constexpr void __set__headTopId_k__BackingField(::StringW value);

  constexpr ::StringW& __get__glassesId_k__BackingField();

  constexpr ::StringW const& __get__glassesId_k__BackingField() const;

  constexpr void __set__glassesId_k__BackingField(::StringW value);

  constexpr ::StringW& __get__facialHairId_k__BackingField();

  constexpr ::StringW const& __get__facialHairId_k__BackingField() const;

  constexpr void __set__facialHairId_k__BackingField(::StringW value);

  constexpr ::StringW& __get__handsId_k__BackingField();

  constexpr ::StringW const& __get__handsId_k__BackingField() const;

  constexpr void __set__handsId_k__BackingField(::StringW value);

  constexpr ::StringW& __get__clothesId_k__BackingField();

  constexpr ::StringW const& __get__clothesId_k__BackingField() const;

  constexpr void __set__clothesId_k__BackingField(::StringW value);

  constexpr ::StringW& __get__eyesId_k__BackingField();

  constexpr ::StringW const& __get__eyesId_k__BackingField() const;

  constexpr void __set__eyesId_k__BackingField(::StringW value);

  constexpr ::StringW& __get__mouthId_k__BackingField();

  constexpr ::StringW const& __get__mouthId_k__BackingField() const;

  constexpr void __set__mouthId_k__BackingField(::StringW value);

  constexpr ::UnityEngine::Color& __get__headTopPrimaryColor_k__BackingField();

  constexpr ::UnityEngine::Color const& __get__headTopPrimaryColor_k__BackingField() const;

  constexpr void __set__headTopPrimaryColor_k__BackingField(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__headTopSecondaryColor_k__BackingField();

  constexpr ::UnityEngine::Color const& __get__headTopSecondaryColor_k__BackingField() const;

  constexpr void __set__headTopSecondaryColor_k__BackingField(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__glassesColor_k__BackingField();

  constexpr ::UnityEngine::Color const& __get__glassesColor_k__BackingField() const;

  constexpr void __set__glassesColor_k__BackingField(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__facialHairColor_k__BackingField();

  constexpr ::UnityEngine::Color const& __get__facialHairColor_k__BackingField() const;

  constexpr void __set__facialHairColor_k__BackingField(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__handsColor_k__BackingField();

  constexpr ::UnityEngine::Color const& __get__handsColor_k__BackingField() const;

  constexpr void __set__handsColor_k__BackingField(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__clothesPrimaryColor_k__BackingField();

  constexpr ::UnityEngine::Color const& __get__clothesPrimaryColor_k__BackingField() const;

  constexpr void __set__clothesPrimaryColor_k__BackingField(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__clothesSecondaryColor_k__BackingField();

  constexpr ::UnityEngine::Color const& __get__clothesSecondaryColor_k__BackingField() const;

  constexpr void __set__clothesSecondaryColor_k__BackingField(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__clothesDetailColor_k__BackingField();

  constexpr ::UnityEngine::Color const& __get__clothesDetailColor_k__BackingField() const;

  constexpr void __set__clothesDetailColor_k__BackingField(::UnityEngine::Color value);

  constexpr ::StringW& __get__skinColorId_k__BackingField();

  constexpr ::StringW const& __get__skinColorId_k__BackingField() const;

  constexpr void __set__skinColorId_k__BackingField(::StringW value);

  /// @brief Method get_headTopId addr 0x223c2a0 size 0x8 virtual false final false
  inline ::StringW get_headTopId();

  /// @brief Method set_headTopId addr 0x223c2a8 size 0x8 virtual false final false
  inline void set_headTopId(::StringW value);

  /// @brief Method get_glassesId addr 0x223c2b0 size 0x8 virtual false final false
  inline ::StringW get_glassesId();

  /// @brief Method set_glassesId addr 0x223c2b8 size 0x8 virtual false final false
  inline void set_glassesId(::StringW value);

  /// @brief Method get_facialHairId addr 0x223c2c0 size 0x8 virtual false final false
  inline ::StringW get_facialHairId();

  /// @brief Method set_facialHairId addr 0x223c2c8 size 0x8 virtual false final false
  inline void set_facialHairId(::StringW value);

  /// @brief Method get_handsId addr 0x223c2d0 size 0x8 virtual false final false
  inline ::StringW get_handsId();

  /// @brief Method set_handsId addr 0x223c2d8 size 0x8 virtual false final false
  inline void set_handsId(::StringW value);

  /// @brief Method get_clothesId addr 0x223c2e0 size 0x8 virtual false final false
  inline ::StringW get_clothesId();

  /// @brief Method set_clothesId addr 0x223c2e8 size 0x8 virtual false final false
  inline void set_clothesId(::StringW value);

  /// @brief Method get_eyesId addr 0x223c2f0 size 0x8 virtual false final false
  inline ::StringW get_eyesId();

  /// @brief Method set_eyesId addr 0x223c2f8 size 0x8 virtual false final false
  inline void set_eyesId(::StringW value);

  /// @brief Method get_mouthId addr 0x223c300 size 0x8 virtual false final false
  inline ::StringW get_mouthId();

  /// @brief Method set_mouthId addr 0x223c308 size 0x8 virtual false final false
  inline void set_mouthId(::StringW value);

  /// @brief Method get_headTopPrimaryColor addr 0x223c310 size 0xc virtual false final false
  inline ::UnityEngine::Color get_headTopPrimaryColor();

  /// @brief Method set_headTopPrimaryColor addr 0x223c31c size 0xc virtual false final false
  inline void set_headTopPrimaryColor(::UnityEngine::Color value);

  /// @brief Method get_headTopSecondaryColor addr 0x223c328 size 0xc virtual false final false
  inline ::UnityEngine::Color get_headTopSecondaryColor();

  /// @brief Method set_headTopSecondaryColor addr 0x223c334 size 0xc virtual false final false
  inline void set_headTopSecondaryColor(::UnityEngine::Color value);

  /// @brief Method get_glassesColor addr 0x223c340 size 0xc virtual false final false
  inline ::UnityEngine::Color get_glassesColor();

  /// @brief Method set_glassesColor addr 0x223c34c size 0xc virtual false final false
  inline void set_glassesColor(::UnityEngine::Color value);

  /// @brief Method get_facialHairColor addr 0x223c358 size 0xc virtual false final false
  inline ::UnityEngine::Color get_facialHairColor();

  /// @brief Method set_facialHairColor addr 0x223c364 size 0xc virtual false final false
  inline void set_facialHairColor(::UnityEngine::Color value);

  /// @brief Method get_handsColor addr 0x223c370 size 0xc virtual false final false
  inline ::UnityEngine::Color get_handsColor();

  /// @brief Method set_handsColor addr 0x223c37c size 0xc virtual false final false
  inline void set_handsColor(::UnityEngine::Color value);

  /// @brief Method get_clothesPrimaryColor addr 0x223c388 size 0xc virtual false final false
  inline ::UnityEngine::Color get_clothesPrimaryColor();

  /// @brief Method set_clothesPrimaryColor addr 0x223c394 size 0xc virtual false final false
  inline void set_clothesPrimaryColor(::UnityEngine::Color value);

  /// @brief Method get_clothesSecondaryColor addr 0x223c3a0 size 0xc virtual false final false
  inline ::UnityEngine::Color get_clothesSecondaryColor();

  /// @brief Method set_clothesSecondaryColor addr 0x223c3ac size 0xc virtual false final false
  inline void set_clothesSecondaryColor(::UnityEngine::Color value);

  /// @brief Method get_clothesDetailColor addr 0x223c3b8 size 0xc virtual false final false
  inline ::UnityEngine::Color get_clothesDetailColor();

  /// @brief Method set_clothesDetailColor addr 0x223c3c4 size 0xc virtual false final false
  inline void set_clothesDetailColor(::UnityEngine::Color value);

  /// @brief Method get_skinColorId addr 0x223c3d0 size 0x8 virtual false final false
  inline ::StringW get_skinColorId();

  /// @brief Method set_skinColorId addr 0x223c3d8 size 0x8 virtual false final false
  inline void set_skinColorId(::StringW value);

  static inline ::GlobalNamespace::AvatarData* New_ctor();

  /// @brief Method .ctor addr 0x223c3e0 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::GlobalNamespace::AvatarData* New_ctor(::StringW headTopId, ::UnityEngine::Color headTopPrimaryColor, ::UnityEngine::Color headTopSecondaryColor, ::StringW glassesId,
                                                        ::UnityEngine::Color glassesColor, ::StringW facialHairId, ::UnityEngine::Color facialHairColor, ::StringW handsId,
                                                        ::UnityEngine::Color handsColor, ::StringW clothesId, ::UnityEngine::Color clothesPrimaryColor, ::UnityEngine::Color clothesSecondaryColor,
                                                        ::UnityEngine::Color clothesDetailColor, ::StringW skinColorId, ::StringW eyesId, ::StringW mouthId);

  /// @brief Method .ctor addr 0x223c3e8 size 0x138 virtual false final false
  inline void _ctor(::StringW headTopId, ::UnityEngine::Color headTopPrimaryColor, ::UnityEngine::Color headTopSecondaryColor, ::StringW glassesId, ::UnityEngine::Color glassesColor,
                    ::StringW facialHairId, ::UnityEngine::Color facialHairColor, ::StringW handsId, ::UnityEngine::Color handsColor, ::StringW clothesId, ::UnityEngine::Color clothesPrimaryColor,
                    ::UnityEngine::Color clothesSecondaryColor, ::UnityEngine::Color clothesDetailColor, ::StringW skinColorId, ::StringW eyesId, ::StringW mouthId);

  /// @brief Method Clone addr 0x223c520 size 0x248 virtual false final false
  inline ::GlobalNamespace::AvatarData* Clone();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarData(AvatarData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarData(AvatarData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarData();

public:
  /// @brief Field <headTopId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____headTopId_k__BackingField;

  /// @brief Field <glassesId>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____glassesId_k__BackingField;

  /// @brief Field <facialHairId>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____facialHairId_k__BackingField;

  /// @brief Field <handsId>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____handsId_k__BackingField;

  /// @brief Field <clothesId>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____clothesId_k__BackingField;

  /// @brief Field <eyesId>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____eyesId_k__BackingField;

  /// @brief Field <mouthId>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____mouthId_k__BackingField;

  /// @brief Field <headTopPrimaryColor>k__BackingField, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____headTopPrimaryColor_k__BackingField;

  /// @brief Field <headTopSecondaryColor>k__BackingField, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ____headTopSecondaryColor_k__BackingField;

  /// @brief Field <glassesColor>k__BackingField, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ____glassesColor_k__BackingField;

  /// @brief Field <facialHairColor>k__BackingField, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Color ____facialHairColor_k__BackingField;

  /// @brief Field <handsColor>k__BackingField, offset: 0x88, size: 0x10, def value: None
  ::UnityEngine::Color ____handsColor_k__BackingField;

  /// @brief Field <clothesPrimaryColor>k__BackingField, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Color ____clothesPrimaryColor_k__BackingField;

  /// @brief Field <clothesSecondaryColor>k__BackingField, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Color ____clothesSecondaryColor_k__BackingField;

  /// @brief Field <clothesDetailColor>k__BackingField, offset: 0xb8, size: 0x10, def value: None
  ::UnityEngine::Color ____clothesDetailColor_k__BackingField;

  /// @brief Field <skinColorId>k__BackingField, offset: 0xc8, size: 0x8, def value: None
  ::StringW ____skinColorId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarData, 0xd0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarData, ____headTopId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarData, ____glassesId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarData, ____facialHairId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarData, ____handsId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarData, ____clothesId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarData, ____eyesId_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarData, ____mouthId_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarData, ____headTopPrimaryColor_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarData, ____headTopSecondaryColor_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarData, ____glassesColor_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarData, ____facialHairColor_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarData, ____handsColor_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarData, ____clothesPrimaryColor_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarData, ____clothesSecondaryColor_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarData, ____clothesDetailColor_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarData, ____skinColorId_k__BackingField) == 0xc8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarData*, "", "AvatarData");
