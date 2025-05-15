#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/AvatarData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarData)
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class AvatarData;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarData);
// Dependencies System.IEquatable`1<T>, System.Object, UnityEngine.Color
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.AvatarData
class CORDL_TYPE AvatarData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <clothesDetailColor>k__BackingField, offset 0xb8, size 0x10
  __declspec(property(get = __cordl_internal_get__clothesDetailColor_k__BackingField,
                      put = __cordl_internal_set__clothesDetailColor_k__BackingField)) ::UnityEngine::Color _clothesDetailColor_k__BackingField;

  /// @brief Field <clothesId>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__clothesId_k__BackingField, put = __cordl_internal_set__clothesId_k__BackingField)) ::StringW _clothesId_k__BackingField;

  /// @brief Field <clothesPrimaryColor>k__BackingField, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get__clothesPrimaryColor_k__BackingField,
                      put = __cordl_internal_set__clothesPrimaryColor_k__BackingField)) ::UnityEngine::Color _clothesPrimaryColor_k__BackingField;

  /// @brief Field <clothesSecondaryColor>k__BackingField, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get__clothesSecondaryColor_k__BackingField,
                      put = __cordl_internal_set__clothesSecondaryColor_k__BackingField)) ::UnityEngine::Color _clothesSecondaryColor_k__BackingField;

  /// @brief Field <eyesId>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__eyesId_k__BackingField, put = __cordl_internal_set__eyesId_k__BackingField)) ::StringW _eyesId_k__BackingField;

  /// @brief Field <facialHairColor>k__BackingField, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get__facialHairColor_k__BackingField, put = __cordl_internal_set__facialHairColor_k__BackingField)) ::UnityEngine::Color _facialHairColor_k__BackingField;

  /// @brief Field <facialHairId>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__facialHairId_k__BackingField, put = __cordl_internal_set__facialHairId_k__BackingField)) ::StringW _facialHairId_k__BackingField;

  /// @brief Field <glassesColor>k__BackingField, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__glassesColor_k__BackingField, put = __cordl_internal_set__glassesColor_k__BackingField)) ::UnityEngine::Color _glassesColor_k__BackingField;

  /// @brief Field <glassesId>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__glassesId_k__BackingField, put = __cordl_internal_set__glassesId_k__BackingField)) ::StringW _glassesId_k__BackingField;

  /// @brief Field <handsColor>k__BackingField, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get__handsColor_k__BackingField, put = __cordl_internal_set__handsColor_k__BackingField)) ::UnityEngine::Color _handsColor_k__BackingField;

  /// @brief Field <handsId>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__handsId_k__BackingField, put = __cordl_internal_set__handsId_k__BackingField)) ::StringW _handsId_k__BackingField;

  /// @brief Field <headTopId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__headTopId_k__BackingField, put = __cordl_internal_set__headTopId_k__BackingField)) ::StringW _headTopId_k__BackingField;

  /// @brief Field <headTopPrimaryColor>k__BackingField, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__headTopPrimaryColor_k__BackingField,
                      put = __cordl_internal_set__headTopPrimaryColor_k__BackingField)) ::UnityEngine::Color _headTopPrimaryColor_k__BackingField;

  /// @brief Field <headTopSecondaryColor>k__BackingField, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__headTopSecondaryColor_k__BackingField,
                      put = __cordl_internal_set__headTopSecondaryColor_k__BackingField)) ::UnityEngine::Color _headTopSecondaryColor_k__BackingField;

  /// @brief Field <mouthId>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__mouthId_k__BackingField, put = __cordl_internal_set__mouthId_k__BackingField)) ::StringW _mouthId_k__BackingField;

  /// @brief Field <skinColorId>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__skinColorId_k__BackingField, put = __cordl_internal_set__skinColorId_k__BackingField)) ::StringW _skinColorId_k__BackingField;

  __declspec(property(get = get_clothesDetailColor, put = set_clothesDetailColor)) ::UnityEngine::Color clothesDetailColor;

  __declspec(property(get = get_clothesId, put = set_clothesId)) ::StringW clothesId;

  __declspec(property(get = get_clothesPrimaryColor, put = set_clothesPrimaryColor)) ::UnityEngine::Color clothesPrimaryColor;

  __declspec(property(get = get_clothesSecondaryColor, put = set_clothesSecondaryColor)) ::UnityEngine::Color clothesSecondaryColor;

  __declspec(property(get = get_eyesId, put = set_eyesId)) ::StringW eyesId;

  __declspec(property(get = get_facialHairColor, put = set_facialHairColor)) ::UnityEngine::Color facialHairColor;

  __declspec(property(get = get_facialHairId, put = set_facialHairId)) ::StringW facialHairId;

  __declspec(property(get = get_glassesColor, put = set_glassesColor)) ::UnityEngine::Color glassesColor;

  __declspec(property(get = get_glassesId, put = set_glassesId)) ::StringW glassesId;

  __declspec(property(get = get_handsColor, put = set_handsColor)) ::UnityEngine::Color handsColor;

  __declspec(property(get = get_handsId, put = set_handsId)) ::StringW handsId;

  __declspec(property(get = get_headTopId, put = set_headTopId)) ::StringW headTopId;

  __declspec(property(get = get_headTopPrimaryColor, put = set_headTopPrimaryColor)) ::UnityEngine::Color headTopPrimaryColor;

  __declspec(property(get = get_headTopSecondaryColor, put = set_headTopSecondaryColor)) ::UnityEngine::Color headTopSecondaryColor;

  __declspec(property(get = get_mouthId, put = set_mouthId)) ::StringW mouthId;

  __declspec(property(get = get_skinColorId, put = set_skinColorId)) ::StringW skinColorId;

  /// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::BeatAvatarSDK::AvatarData*>"
  constexpr operator ::System::IEquatable_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*() noexcept;

  /// @brief Method Clone, addr 0x2259634, size 0x1ac, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::AvatarData* Clone();

  /// @brief Method Equals, addr 0x2259d88, size 0x10c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x22599a0, size 0x3e8, virtual true, abstract: false, final true
  inline bool Equals(::BeatSaber::BeatAvatarSDK::AvatarData* other);

  /// @brief Method GetHashCode, addr 0x22597e0, size 0x1c0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::BeatSaber::BeatAvatarSDK::AvatarData* New_ctor();

  static inline ::BeatSaber::BeatAvatarSDK::AvatarData* New_ctor(::StringW headTopId, ::UnityEngine::Color headTopPrimaryColor, ::UnityEngine::Color headTopSecondaryColor, ::StringW glassesId,
                                                                 ::UnityEngine::Color glassesColor, ::StringW facialHairId, ::UnityEngine::Color facialHairColor, ::StringW handsId,
                                                                 ::UnityEngine::Color handsColor, ::StringW clothesId, ::UnityEngine::Color clothesPrimaryColor,
                                                                 ::UnityEngine::Color clothesSecondaryColor, ::UnityEngine::Color clothesDetailColor, ::StringW skinColorId, ::StringW eyesId,
                                                                 ::StringW mouthId);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__clothesDetailColor_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__clothesDetailColor_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__clothesId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__clothesId_k__BackingField();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__clothesPrimaryColor_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__clothesPrimaryColor_k__BackingField();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__clothesSecondaryColor_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__clothesSecondaryColor_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__eyesId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__eyesId_k__BackingField();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__facialHairColor_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__facialHairColor_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__facialHairId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__facialHairId_k__BackingField();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__glassesColor_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__glassesColor_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__glassesId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__glassesId_k__BackingField();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__handsColor_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__handsColor_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__handsId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__handsId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__headTopId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__headTopId_k__BackingField();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__headTopPrimaryColor_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__headTopPrimaryColor_k__BackingField();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__headTopSecondaryColor_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__headTopSecondaryColor_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__mouthId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__mouthId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__skinColorId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__skinColorId_k__BackingField();

  constexpr void __cordl_internal_set__clothesDetailColor_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__clothesId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__clothesPrimaryColor_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__clothesSecondaryColor_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__eyesId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__facialHairColor_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__facialHairId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__glassesColor_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__glassesId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__handsColor_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__handsId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__headTopId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__headTopPrimaryColor_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__headTopSecondaryColor_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__mouthId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__skinColorId_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x22594f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x22594fc, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::StringW headTopId, ::UnityEngine::Color headTopPrimaryColor, ::UnityEngine::Color headTopSecondaryColor, ::StringW glassesId, ::UnityEngine::Color glassesColor,
                    ::StringW facialHairId, ::UnityEngine::Color facialHairColor, ::StringW handsId, ::UnityEngine::Color handsColor, ::StringW clothesId, ::UnityEngine::Color clothesPrimaryColor,
                    ::UnityEngine::Color clothesSecondaryColor, ::UnityEngine::Color clothesDetailColor, ::StringW skinColorId, ::StringW eyesId, ::StringW mouthId);

  /// @brief Method get_clothesDetailColor, addr 0x22594cc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_clothesDetailColor();

  /// @brief Method get_clothesId, addr 0x22593f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_clothesId();

  /// @brief Method get_clothesPrimaryColor, addr 0x225949c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_clothesPrimaryColor();

  /// @brief Method get_clothesSecondaryColor, addr 0x22594b4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_clothesSecondaryColor();

  /// @brief Method get_eyesId, addr 0x2259404, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_eyesId();

  /// @brief Method get_facialHairColor, addr 0x225946c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_facialHairColor();

  /// @brief Method get_facialHairId, addr 0x22593d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_facialHairId();

  /// @brief Method get_glassesColor, addr 0x2259454, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_glassesColor();

  /// @brief Method get_glassesId, addr 0x22593c4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_glassesId();

  /// @brief Method get_handsColor, addr 0x2259484, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_handsColor();

  /// @brief Method get_handsId, addr 0x22593e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_handsId();

  /// @brief Method get_headTopId, addr 0x22593b4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_headTopId();

  /// @brief Method get_headTopPrimaryColor, addr 0x2259424, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_headTopPrimaryColor();

  /// @brief Method get_headTopSecondaryColor, addr 0x225943c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_headTopSecondaryColor();

  /// @brief Method get_mouthId, addr 0x2259414, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_mouthId();

  /// @brief Method get_skinColorId, addr 0x22594e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_skinColorId();

  /// @brief Convert to "::System::IEquatable_1<::BeatSaber::BeatAvatarSDK::AvatarData*>"
  constexpr ::System::IEquatable_1<::BeatSaber::BeatAvatarSDK::AvatarData*>* i___System__IEquatable_1___BeatSaber__BeatAvatarSDK__AvatarData__() noexcept;

  /// @brief Method set_clothesDetailColor, addr 0x22594d8, size 0xc, virtual false, abstract: false, final false
  inline void set_clothesDetailColor(::UnityEngine::Color value);

  /// @brief Method set_clothesId, addr 0x22593fc, size 0x8, virtual false, abstract: false, final false
  inline void set_clothesId(::StringW value);

  /// @brief Method set_clothesPrimaryColor, addr 0x22594a8, size 0xc, virtual false, abstract: false, final false
  inline void set_clothesPrimaryColor(::UnityEngine::Color value);

  /// @brief Method set_clothesSecondaryColor, addr 0x22594c0, size 0xc, virtual false, abstract: false, final false
  inline void set_clothesSecondaryColor(::UnityEngine::Color value);

  /// @brief Method set_eyesId, addr 0x225940c, size 0x8, virtual false, abstract: false, final false
  inline void set_eyesId(::StringW value);

  /// @brief Method set_facialHairColor, addr 0x2259478, size 0xc, virtual false, abstract: false, final false
  inline void set_facialHairColor(::UnityEngine::Color value);

  /// @brief Method set_facialHairId, addr 0x22593dc, size 0x8, virtual false, abstract: false, final false
  inline void set_facialHairId(::StringW value);

  /// @brief Method set_glassesColor, addr 0x2259460, size 0xc, virtual false, abstract: false, final false
  inline void set_glassesColor(::UnityEngine::Color value);

  /// @brief Method set_glassesId, addr 0x22593cc, size 0x8, virtual false, abstract: false, final false
  inline void set_glassesId(::StringW value);

  /// @brief Method set_handsColor, addr 0x2259490, size 0xc, virtual false, abstract: false, final false
  inline void set_handsColor(::UnityEngine::Color value);

  /// @brief Method set_handsId, addr 0x22593ec, size 0x8, virtual false, abstract: false, final false
  inline void set_handsId(::StringW value);

  /// @brief Method set_headTopId, addr 0x22593bc, size 0x8, virtual false, abstract: false, final false
  inline void set_headTopId(::StringW value);

  /// @brief Method set_headTopPrimaryColor, addr 0x2259430, size 0xc, virtual false, abstract: false, final false
  inline void set_headTopPrimaryColor(::UnityEngine::Color value);

  /// @brief Method set_headTopSecondaryColor, addr 0x2259448, size 0xc, virtual false, abstract: false, final false
  inline void set_headTopSecondaryColor(::UnityEngine::Color value);

  /// @brief Method set_mouthId, addr 0x225941c, size 0x8, virtual false, abstract: false, final false
  inline void set_mouthId(::StringW value);

  /// @brief Method set_skinColorId, addr 0x22594ec, size 0x8, virtual false, abstract: false, final false
  inline void set_skinColorId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarData(AvatarData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarData(AvatarData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18151 };

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
static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarData, ____headTopId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarData, ____glassesId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarData, ____facialHairId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarData, ____handsId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarData, ____clothesId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarData, ____eyesId_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarData, ____mouthId_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarData, ____headTopPrimaryColor_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarData, ____headTopSecondaryColor_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarData, ____glassesColor_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarData, ____facialHairColor_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarData, ____handsColor_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarData, ____clothesPrimaryColor_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarData, ____clothesSecondaryColor_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarData, ____clothesDetailColor_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarData, ____skinColorId_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarData, 0xd0>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::AvatarData);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarData*, "BeatSaber.BeatAvatarSDK", "AvatarData");
