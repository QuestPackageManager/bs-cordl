#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SafeHandleAccess.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SafeHandleAccess)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct SafeHandleAccess;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::SafeHandleAccess);
// Type: UnityEngine.UIElements::SafeHandleAccess
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::SafeHandleAccess
struct CORDL_TYPE SafeHandleAccess {
public:
  // Declarations
  /// @brief Method IsNull, addr 0x49cc35c, size 0x10, virtual false, abstract: false, final false
  inline bool IsNull();

  /// @brief Method .ctor, addr 0x49cc354, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  /// @brief Method op_Implicit, addr 0x49cc36c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::IntPtr op_Implicit___System__IntPtr(::UnityEngine::UIElements::SafeHandleAccess a);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeHandleAccess();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr SafeHandleAccess(::System::IntPtr m_Handle) noexcept;

  /// @brief Field m_Handle, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Handle;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5989 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::SafeHandleAccess, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SafeHandleAccess, m_Handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::SafeHandleAccess, "UnityEngine.UIElements", "SafeHandleAccess");
