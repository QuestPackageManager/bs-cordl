#pragma once
// IWYU pragma private; include "GlobalNamespace/PromoBannerInfoSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PromoBannerInfoSO)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class PromoBannerInfoSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PromoBannerInfoSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PromoBannerInfoSO
class CORDL_TYPE PromoBannerInfoSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _bannerImage, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__bannerImage, put = __cordl_internal_set__bannerImage)) ::UnityW<::UnityEngine::Sprite> _bannerImage;

  /// @brief Field _bannerPromoText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bannerPromoText, put = __cordl_internal_set__bannerPromoText)) ::StringW _bannerPromoText;

  /// @brief Field _bannerPromoTextPosition, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__bannerPromoTextPosition, put = __cordl_internal_set__bannerPromoTextPosition)) float_t _bannerPromoTextPosition;

  __declspec(property(get = get_bannerImage)) ::UnityW<::UnityEngine::Sprite> bannerImage;

  __declspec(property(get = get_bannerPromoText)) ::StringW bannerPromoText;

  __declspec(property(get = get_bannerPromoTextPosition)) float_t bannerPromoTextPosition;

  static inline ::GlobalNamespace::PromoBannerInfoSO* New_ctor();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__bannerImage() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__bannerImage();

  constexpr ::StringW const& __cordl_internal_get__bannerPromoText() const;

  constexpr ::StringW& __cordl_internal_get__bannerPromoText();

  constexpr float_t const& __cordl_internal_get__bannerPromoTextPosition() const;

  constexpr float_t& __cordl_internal_get__bannerPromoTextPosition();

  constexpr void __cordl_internal_set__bannerImage(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__bannerPromoText(::StringW value);

  constexpr void __cordl_internal_set__bannerPromoTextPosition(float_t value);

  /// @brief Method .ctor, addr 0x26d43b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bannerImage, addr 0x26d43a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_bannerImage();

  /// @brief Method get_bannerPromoText, addr 0x26d43a8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_bannerPromoText();

  /// @brief Method get_bannerPromoTextPosition, addr 0x26d43b0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bannerPromoTextPosition();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PromoBannerInfoSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PromoBannerInfoSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PromoBannerInfoSO(PromoBannerInfoSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PromoBannerInfoSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PromoBannerInfoSO(PromoBannerInfoSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13014 };

  /// @brief Field _bannerImage, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____bannerImage;

  /// @brief Field _bannerPromoText, offset: 0x20, size: 0x8, def value: None
  ::StringW ____bannerPromoText;

  /// @brief Field _bannerPromoTextPosition, offset: 0x28, size: 0x4, def value: None
  float_t ____bannerPromoTextPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PromoBannerInfoSO, ____bannerImage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromoBannerInfoSO, ____bannerPromoText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromoBannerInfoSO, ____bannerPromoTextPosition) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PromoBannerInfoSO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PromoBannerInfoSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PromoBannerInfoSO*, "", "PromoBannerInfoSO");
