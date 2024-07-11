#pragma once
// IWYU pragma private; include "UnityEngine/UI/RectangularVertexClipper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(RectangularVertexClipper)
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UI {
class RectangularVertexClipper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::RectangularVertexClipper);
// Type: UnityEngine.UI::RectangularVertexClipper
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::RectangularVertexClipper*
class CORDL_TYPE RectangularVertexClipper : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_CanvasCorners, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CanvasCorners, put = __cordl_internal_set_m_CanvasCorners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_CanvasCorners;

  /// @brief Field m_WorldCorners, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WorldCorners, put = __cordl_internal_set_m_WorldCorners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_WorldCorners;

  /// @brief Method GetCanvasRect, addr 0x34e47d4, size 0x170, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetCanvasRect(::UnityEngine::RectTransform* t, ::UnityEngine::Canvas* c);

  static inline ::UnityEngine::UI::RectangularVertexClipper* New_ctor();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_CanvasCorners() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_CanvasCorners();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_WorldCorners() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_WorldCorners();

  constexpr void __cordl_internal_set_m_CanvasCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_WorldCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method .ctor, addr 0x34e4944, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectangularVertexClipper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectangularVertexClipper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectangularVertexClipper(RectangularVertexClipper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectangularVertexClipper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectangularVertexClipper(RectangularVertexClipper const&) = delete;

  /// @brief Field m_WorldCorners, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_WorldCorners;

  /// @brief Field m_CanvasCorners, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_CanvasCorners;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::RectangularVertexClipper, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectangularVertexClipper, ___m_WorldCorners) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::RectangularVertexClipper, ___m_CanvasCorners) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::RectangularVertexClipper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::RectangularVertexClipper*, "UnityEngine.UI", "RectangularVertexClipper");
