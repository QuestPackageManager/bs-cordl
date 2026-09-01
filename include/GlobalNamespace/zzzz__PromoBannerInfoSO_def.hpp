#pragma once
// IWYU pragma private; include "GlobalNamespace\PromoBannerInfoSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PromoBannerInfoSO)
namespace System {
struct DateTime;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class PromoBannerInfoSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PromoBannerInfoSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PromoBannerInfoSO*, "", "PromoBannerInfoSO");
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

  /// @brief Field _bannerPromoTextShowUntilDate, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__bannerPromoTextShowUntilDate, put = __cordl_internal_set__bannerPromoTextShowUntilDate)) ::StringW _bannerPromoTextShowUntilDate;

  __declspec(property(get = get_bannerImage, put = set_bannerImage)) ::UnityW<::UnityEngine::Sprite> bannerImage;

  __declspec(property(get = get_bannerPromoText)) ::StringW bannerPromoText;

  __declspec(property(get = get_bannerPromoTextPosition)) float_t bannerPromoTextPosition;

  /// @brief Method IsPromoTextHiddenOn, addr 0x372f61c, size 0x18, virtual false, abstract: false, final false
  inline bool IsPromoTextHiddenOn(::System::DateTime now);

  static inline ::GlobalNamespace::PromoBannerInfoSO* New_ctor();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__bannerImage() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__bannerImage();

  constexpr ::StringW const& __cordl_internal_get__bannerPromoText() const;

  constexpr ::StringW& __cordl_internal_get__bannerPromoText();

  constexpr float_t const& __cordl_internal_get__bannerPromoTextPosition() const;

  constexpr float_t& __cordl_internal_get__bannerPromoTextPosition();

  constexpr ::StringW const& __cordl_internal_get__bannerPromoTextShowUntilDate() const;

  constexpr ::StringW& __cordl_internal_get__bannerPromoTextShowUntilDate();

  constexpr void __cordl_internal_set__bannerImage(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__bannerPromoText(::StringW value);

  constexpr void __cordl_internal_set__bannerPromoTextPosition(float_t value);

  constexpr void __cordl_internal_set__bannerPromoTextShowUntilDate(::StringW value);

  /// @brief Method .ctor, addr 0x372f634, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bannerImage, addr 0x372f5fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_bannerImage();

  /// @brief Method get_bannerPromoText, addr 0x372f60c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_bannerPromoText();

  /// @brief Method get_bannerPromoTextPosition, addr 0x372f614, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bannerPromoTextPosition();

  /// @brief Method set_bannerImage, addr 0x372f604, size 0x8, virtual false, abstract: false, final false
  inline void set_bannerImage(::UnityEngine::Sprite* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15026 };

  /// @brief Field _bannerImage, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____bannerImage;

  /// @brief Field _bannerPromoText, offset: 0x20, size: 0x8, def value: None
  ::StringW ____bannerPromoText;

  /// @brief Field _bannerPromoTextPosition, offset: 0x28, size: 0x4, def value: None
  float_t ____bannerPromoTextPosition;

  /// @brief Field _bannerPromoTextShowUntilDate, offset: 0x30, size: 0x8, def value: None
  ::StringW ____bannerPromoTextShowUntilDate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PromoBannerInfoSO, ____bannerImage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromoBannerInfoSO, ____bannerPromoText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromoBannerInfoSO, ____bannerPromoTextPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromoBannerInfoSO, ____bannerPromoTextShowUntilDate) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PromoBannerInfoSO) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
