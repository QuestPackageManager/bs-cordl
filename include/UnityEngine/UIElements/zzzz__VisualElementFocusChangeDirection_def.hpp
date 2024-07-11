#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementFocusChangeDirection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElementFocusChangeDirection)
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementFocusChangeDirection;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementFocusChangeDirection);
// Type: UnityEngine.UIElements::VisualElementFocusChangeDirection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::VisualElementFocusChangeDirection*
class CORDL_TYPE VisualElementFocusChangeDirection : public ::UnityEngine::UIElements::FocusChangeDirection {
public:
  // Declarations
  /// @brief Field s_Left, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Left, put = setStaticF_s_Left))::UnityEngine::UIElements::VisualElementFocusChangeDirection* s_Left;

  /// @brief Field s_Right, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Right, put = setStaticF_s_Right))::UnityEngine::UIElements::VisualElementFocusChangeDirection* s_Right;

  static inline ::UnityEngine::UIElements::VisualElementFocusChangeDirection* New_ctor(int32_t value);

  /// @brief Method .ctor, addr 0x35504c8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  static inline ::UnityEngine::UIElements::VisualElementFocusChangeDirection* getStaticF_s_Left();

  static inline ::UnityEngine::UIElements::VisualElementFocusChangeDirection* getStaticF_s_Right();

  /// @brief Method get_left, addr 0x3550418, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FocusChangeDirection* get_left();

  /// @brief Method get_right, addr 0x3550470, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FocusChangeDirection* get_right();

  static inline void setStaticF_s_Left(::UnityEngine::UIElements::VisualElementFocusChangeDirection* value);

  static inline void setStaticF_s_Right(::UnityEngine::UIElements::VisualElementFocusChangeDirection* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementFocusChangeDirection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusChangeDirection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementFocusChangeDirection(VisualElementFocusChangeDirection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusChangeDirection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementFocusChangeDirection(VisualElementFocusChangeDirection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementFocusChangeDirection, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementFocusChangeDirection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementFocusChangeDirection*, "UnityEngine.UIElements", "VisualElementFocusChangeDirection");
