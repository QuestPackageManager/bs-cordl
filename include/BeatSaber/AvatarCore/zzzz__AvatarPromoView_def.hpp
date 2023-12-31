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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15175))
// CS Name: ::BeatSaber.AvatarCore::AvatarPromoView*
class CORDL_TYPE AvatarPromoView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _rectTransform, offset 0x18, size 0x8
  __declspec(property(get = __get__rectTransform, put = __set__rectTransform))::UnityEngine::RectTransform* _rectTransform;

  __declspec(property(get = get_rectTransform))::UnityEngine::RectTransform* rectTransform;

  constexpr ::UnityEngine::RectTransform*& __get__rectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__rectTransform() const;

  constexpr void __set__rectTransform(::UnityEngine::RectTransform* value);

  /// @brief Method get_rectTransform, addr 0xe0bdb8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::RectTransform* get_rectTransform();

  static inline ::BeatSaber::AvatarCore::AvatarPromoView* New_ctor();

  /// @brief Method .ctor, addr 0xe0bdc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPromoView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarPromoView(AvatarPromoView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPromoView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarPromoView(AvatarPromoView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarPromoView();

public:
  /// @brief Field _rectTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____rectTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarPromoView, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarPromoView, ____rectTransform) == 0x18, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarPromoView);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarPromoView*, "BeatSaber.AvatarCore", "AvatarPromoView");
