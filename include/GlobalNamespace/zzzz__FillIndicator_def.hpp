#pragma once
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5517))
// CS Name: ::FillIndicator*
class CORDL_TYPE FillIndicator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _bgImage, offset 0x18, size 0x8
  __declspec(property(get = __get__bgImage, put = __set__bgImage))::UnityEngine::UI::Image* _bgImage;

  /// @brief Field _image, offset 0x20, size 0x8
  __declspec(property(get = __get__image, put = __set__image))::UnityEngine::UI::Image* _image;

  __declspec(property(get = get_fillAmount, put = set_fillAmount)) float_t fillAmount;

  constexpr ::UnityEngine::UI::Image*& __get__bgImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__bgImage() const;

  constexpr void __set__bgImage(::UnityEngine::UI::Image* value);

  constexpr ::UnityEngine::UI::Image*& __get__image();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__image() const;

  constexpr void __set__image(::UnityEngine::UI::Image* value);

  /// @brief Method set_fillAmount addr 0x2135654 size 0x44 virtual false final false
  inline void set_fillAmount(float_t value);

  /// @brief Method get_fillAmount addr 0x2135784 size 0x1c virtual false final false
  inline float_t get_fillAmount();

  static inline ::GlobalNamespace::FillIndicator* New_ctor();

  /// @brief Method .ctor addr 0x21357a0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FillIndicator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FillIndicator(FillIndicator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FillIndicator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FillIndicator(FillIndicator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FillIndicator();

public:
  /// @brief Field _bgImage, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____bgImage;

  /// @brief Field _image, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____image;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FillIndicator, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FillIndicator, ____bgImage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FillIndicator, ____image) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FillIndicator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FillIndicator*, "", "FillIndicator");
