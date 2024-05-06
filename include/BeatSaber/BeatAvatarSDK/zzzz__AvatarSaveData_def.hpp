#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/AvatarSaveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AvatarSaveData)
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class AvatarSaveData;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarSaveData);
// Type: BeatSaber.BeatAvatarSDK::AvatarSaveData
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: ::BeatSaber.BeatAvatarSDK::AvatarSaveData*
class CORDL_TYPE AvatarSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field clothesDetailColor, offset 0xc0, size 0x10
  __declspec(property(get = __cordl_internal_get_clothesDetailColor, put = __cordl_internal_set_clothesDetailColor))::UnityEngine::Color clothesDetailColor;

  /// @brief Field clothesId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_clothesId, put = __cordl_internal_set_clothesId))::StringW clothesId;

  /// @brief Field clothesPrimaryColor, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get_clothesPrimaryColor, put = __cordl_internal_set_clothesPrimaryColor))::UnityEngine::Color clothesPrimaryColor;

  /// @brief Field clothesSecondaryColor, offset 0xb0, size 0x10
  __declspec(property(get = __cordl_internal_get_clothesSecondaryColor, put = __cordl_internal_set_clothesSecondaryColor))::UnityEngine::Color clothesSecondaryColor;

  /// @brief Field eyesId, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_eyesId, put = __cordl_internal_set_eyesId))::StringW eyesId;

  /// @brief Field facialHairColor, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get_facialHairColor, put = __cordl_internal_set_facialHairColor))::UnityEngine::Color facialHairColor;

  /// @brief Field facialHairId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_facialHairId, put = __cordl_internal_set_facialHairId))::StringW facialHairId;

  /// @brief Field glassesColor, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get_glassesColor, put = __cordl_internal_set_glassesColor))::UnityEngine::Color glassesColor;

  /// @brief Field glassesId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_glassesId, put = __cordl_internal_set_glassesId))::StringW glassesId;

  /// @brief Field handsColor, offset 0x90, size 0x10
  __declspec(property(get = __cordl_internal_get_handsColor, put = __cordl_internal_set_handsColor))::UnityEngine::Color handsColor;

  /// @brief Field handsId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_handsId, put = __cordl_internal_set_handsId))::StringW handsId;

  /// @brief Field headTopId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_headTopId, put = __cordl_internal_set_headTopId))::StringW headTopId;

  /// @brief Field headTopPrimaryColor, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_headTopPrimaryColor, put = __cordl_internal_set_headTopPrimaryColor))::UnityEngine::Color headTopPrimaryColor;

  /// @brief Field headTopSecondaryColor, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_headTopSecondaryColor, put = __cordl_internal_set_headTopSecondaryColor))::UnityEngine::Color headTopSecondaryColor;

  /// @brief Field mouthId, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mouthId, put = __cordl_internal_set_mouthId))::StringW mouthId;

  /// @brief Field skinColorId, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_skinColorId, put = __cordl_internal_set_skinColorId))::StringW skinColorId;

  static inline ::BeatSaber::BeatAvatarSDK::AvatarSaveData* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_clothesDetailColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_clothesDetailColor();

  constexpr ::StringW const& __cordl_internal_get_clothesId() const;

  constexpr ::StringW& __cordl_internal_get_clothesId();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_clothesPrimaryColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_clothesPrimaryColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_clothesSecondaryColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_clothesSecondaryColor();

  constexpr ::StringW const& __cordl_internal_get_eyesId() const;

  constexpr ::StringW& __cordl_internal_get_eyesId();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_facialHairColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_facialHairColor();

  constexpr ::StringW const& __cordl_internal_get_facialHairId() const;

  constexpr ::StringW& __cordl_internal_get_facialHairId();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_glassesColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_glassesColor();

  constexpr ::StringW const& __cordl_internal_get_glassesId() const;

  constexpr ::StringW& __cordl_internal_get_glassesId();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_handsColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_handsColor();

  constexpr ::StringW const& __cordl_internal_get_handsId() const;

  constexpr ::StringW& __cordl_internal_get_handsId();

  constexpr ::StringW const& __cordl_internal_get_headTopId() const;

  constexpr ::StringW& __cordl_internal_get_headTopId();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_headTopPrimaryColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_headTopPrimaryColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_headTopSecondaryColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_headTopSecondaryColor();

  constexpr ::StringW const& __cordl_internal_get_mouthId() const;

  constexpr ::StringW& __cordl_internal_get_mouthId();

  constexpr ::StringW const& __cordl_internal_get_skinColorId() const;

  constexpr ::StringW& __cordl_internal_get_skinColorId();

  constexpr void __cordl_internal_set_clothesDetailColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_clothesId(::StringW value);

  constexpr void __cordl_internal_set_clothesPrimaryColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_clothesSecondaryColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_eyesId(::StringW value);

  constexpr void __cordl_internal_set_facialHairColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_facialHairId(::StringW value);

  constexpr void __cordl_internal_set_glassesColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_glassesId(::StringW value);

  constexpr void __cordl_internal_set_handsColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_handsId(::StringW value);

  constexpr void __cordl_internal_set_headTopId(::StringW value);

  constexpr void __cordl_internal_set_headTopPrimaryColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_headTopSecondaryColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_mouthId(::StringW value);

  constexpr void __cordl_internal_set_skinColorId(::StringW value);

  /// @brief Method .ctor, addr 0x104df98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarSaveData(AvatarSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarSaveData(AvatarSaveData const&) = delete;

  /// @brief Field headTopId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___headTopId;

  /// @brief Field glassesId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___glassesId;

  /// @brief Field facialHairId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___facialHairId;

  /// @brief Field handsId, offset: 0x28, size: 0x8, def value: None
  ::StringW ___handsId;

  /// @brief Field clothesId, offset: 0x30, size: 0x8, def value: None
  ::StringW ___clothesId;

  /// @brief Field skinColorId, offset: 0x38, size: 0x8, def value: None
  ::StringW ___skinColorId;

  /// @brief Field mouthId, offset: 0x40, size: 0x8, def value: None
  ::StringW ___mouthId;

  /// @brief Field eyesId, offset: 0x48, size: 0x8, def value: None
  ::StringW ___eyesId;

  /// @brief Field headTopPrimaryColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ___headTopPrimaryColor;

  /// @brief Field headTopSecondaryColor, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ___headTopSecondaryColor;

  /// @brief Field glassesColor, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Color ___glassesColor;

  /// @brief Field facialHairColor, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Color ___facialHairColor;

  /// @brief Field handsColor, offset: 0x90, size: 0x10, def value: None
  ::UnityEngine::Color ___handsColor;

  /// @brief Field clothesPrimaryColor, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Color ___clothesPrimaryColor;

  /// @brief Field clothesSecondaryColor, offset: 0xb0, size: 0x10, def value: None
  ::UnityEngine::Color ___clothesSecondaryColor;

  /// @brief Field clothesDetailColor, offset: 0xc0, size: 0x10, def value: None
  ::UnityEngine::Color ___clothesDetailColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarSaveData, 0xd0>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarSaveData, ___headTopId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarSaveData, ___glassesId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarSaveData, ___facialHairId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarSaveData, ___handsId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarSaveData, ___clothesId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarSaveData, ___skinColorId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarSaveData, ___mouthId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarSaveData, ___eyesId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarSaveData, ___headTopPrimaryColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarSaveData, ___headTopSecondaryColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarSaveData, ___glassesColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarSaveData, ___facialHairColor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarSaveData, ___handsColor) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarSaveData, ___clothesPrimaryColor) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarSaveData, ___clothesSecondaryColor) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarSaveData, ___clothesDetailColor) == 0xc0, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::AvatarSaveData);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarSaveData*, "BeatSaber.BeatAvatarSDK", "AvatarSaveData");
