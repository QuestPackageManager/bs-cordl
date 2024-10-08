#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIPainter2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIPainter2D)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIPainter2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIPainter2D);
// Type: UnityEngine.UIElements::UIPainter2D
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UIPainter2D*
class CORDL_TYPE UIPainter2D : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x49c6a9c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(bool computeBBox);

  /// @brief Method Destroy, addr 0x49c6ad8, size 0x3c, virtual false, abstract: false, final false
  static inline void Destroy(::System::IntPtr handle);

  /// @brief Method Reset, addr 0x49c6b14, size 0x3c, virtual false, abstract: false, final false
  static inline void Reset(::System::IntPtr handle);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIPainter2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIPainter2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIPainter2D(UIPainter2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIPainter2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIPainter2D(UIPainter2D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5960 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIPainter2D, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIPainter2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIPainter2D*, "UnityEngine.UIElements", "UIPainter2D");
