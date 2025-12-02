#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXExpressionValues.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VFXExpressionValues)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VFXExpressionValues;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::VFX::VFXExpressionValues);
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXExpressionValues
class CORDL_TYPE VFXExpressionValues : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Method CreateExpressionValuesWrapper, addr 0x6bf7660, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXExpressionValues* CreateExpressionValuesWrapper(::System::IntPtr ptr);

  static inline ::UnityEngine::VFX::VFXExpressionValues* New_ctor();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x6bf765c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXExpressionValues();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXExpressionValues", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXExpressionValues(VFXExpressionValues&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXExpressionValues", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXExpressionValues(VFXExpressionValues const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22581 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXExpressionValues, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::VFX::VFXExpressionValues, 0x18>, "Size mismatch!");

} // namespace UnityEngine::VFX
NEED_NO_BOX(::UnityEngine::VFX::VFXExpressionValues);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VFXExpressionValues*, "UnityEngine.VFX", "VFXExpressionValues");
