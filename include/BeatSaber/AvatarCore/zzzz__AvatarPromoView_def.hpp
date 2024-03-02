#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AvatarPromoView)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarPromoView;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarPromoView);
// Type: BeatSaber.AvatarCore::AvatarPromoView
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: ::BeatSaber.AvatarCore::AvatarPromoView*
class CORDL_TYPE AvatarPromoView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _rectTransform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rectTransform, put = __cordl_internal_set__rectTransform))::UnityW<::UnityEngine::RectTransform> _rectTransform;

  __declspec(property(get = get_rectTransform))::UnityW<::UnityEngine::RectTransform> rectTransform;

  static inline ::BeatSaber::AvatarCore::AvatarPromoView* New_ctor();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform();

  constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0xe5ce24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_rectTransform, addr 0xe5ce1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarPromoView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarPromoView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarPromoView(AvatarPromoView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPromoView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarPromoView(AvatarPromoView const&) = delete;

  /// @brief Field _rectTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____rectTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarPromoView, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarPromoView, ____rectTransform) == 0x18, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarPromoView);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarPromoView*, "BeatSaber.AvatarCore", "AvatarPromoView");
