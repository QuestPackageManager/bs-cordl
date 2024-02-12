#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PromoInfoSO)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class PromoInfoSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PromoInfoSO);
// Type: ::PromoInfoSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15602))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10832))
// CS Name: ::PromoInfoSO*
class CORDL_TYPE PromoInfoSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _bannerImage, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__bannerImage, put = __cordl_internal_set__bannerImage))::UnityW<::UnityEngine::Sprite> _bannerImage;

  /// @brief Field _bannerPromoText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bannerPromoText, put = __cordl_internal_set__bannerPromoText))::StringW _bannerPromoText;

  /// @brief Field _bannerPromoTextPosition, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__bannerPromoTextPosition, put = __cordl_internal_set__bannerPromoTextPosition)) float_t _bannerPromoTextPosition;

  __declspec(property(get = get_bannerImage))::UnityW<::UnityEngine::Sprite> bannerImage;

  __declspec(property(get = get_bannerPromoText))::StringW bannerPromoText;

  __declspec(property(get = get_bannerPromoTextPosition)) float_t bannerPromoTextPosition;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__bannerImage();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__bannerImage() const;

  constexpr void __cordl_internal_set__bannerImage(::UnityW<::UnityEngine::Sprite> value);

  constexpr ::StringW& __cordl_internal_get__bannerPromoText();

  constexpr ::StringW const& __cordl_internal_get__bannerPromoText() const;

  constexpr void __cordl_internal_set__bannerPromoText(::StringW value);

  constexpr float_t& __cordl_internal_get__bannerPromoTextPosition();

  constexpr float_t const& __cordl_internal_get__bannerPromoTextPosition() const;

  constexpr void __cordl_internal_set__bannerPromoTextPosition(float_t value);

  /// @brief Method get_bannerImage, addr 0x128f8e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_bannerImage();

  /// @brief Method get_bannerPromoText, addr 0x128f8ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_bannerPromoText();

  /// @brief Method get_bannerPromoTextPosition, addr 0x128f8f4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bannerPromoTextPosition();

  static inline ::GlobalNamespace::PromoInfoSO* New_ctor();

  /// @brief Method .ctor, addr 0x128f8fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PromoInfoSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PromoInfoSO(PromoInfoSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PromoInfoSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PromoInfoSO(PromoInfoSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PromoInfoSO();

public:
  /// @brief Field _bannerImage, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____bannerImage;

  /// @brief Field _bannerPromoText, offset: 0x20, size: 0x8, def value: None
  ::StringW ____bannerPromoText;

  /// @brief Field _bannerPromoTextPosition, offset: 0x28, size: 0x4, def value: None
  float_t ____bannerPromoTextPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PromoInfoSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PromoInfoSO, ____bannerImage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromoInfoSO, ____bannerPromoText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromoInfoSO, ____bannerPromoTextPosition) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PromoInfoSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PromoInfoSO*, "", "PromoInfoSO");
