#pragma once
// IWYU pragma private; include "GlobalNamespace/FillIndicator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FillIndicator)
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class FillIndicator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FillIndicator);
// Type: ::FillIndicator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FillIndicator*
class CORDL_TYPE FillIndicator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _bgImage, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bgImage, put = __cordl_internal_set__bgImage)) ::UnityW<::UnityEngine::UI::Image> _bgImage;

  /// @brief Field _image, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__image, put = __cordl_internal_set__image)) ::UnityW<::UnityEngine::UI::Image> _image;

  __declspec(property(get = get_fillAmount, put = set_fillAmount)) float_t fillAmount;

  static inline ::GlobalNamespace::FillIndicator* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__bgImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__bgImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__image() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__image();

  constexpr void __cordl_internal_set__bgImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__image(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method .ctor, addr 0x3b9629c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_fillAmount, addr 0x3b96280, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_fillAmount();

  /// @brief Method set_fillAmount, addr 0x3b9615c, size 0x44, virtual false, abstract: false, final false
  inline void set_fillAmount(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FillIndicator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FillIndicator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FillIndicator(FillIndicator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FillIndicator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FillIndicator(FillIndicator const&) = delete;

  /// @brief Field _bgImage, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____bgImage;

  /// @brief Field _image, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____image;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4729 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FillIndicator, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FillIndicator, ____bgImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FillIndicator, ____image) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FillIndicator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FillIndicator*, "", "FillIndicator");
