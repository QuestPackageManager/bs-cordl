#pragma once
// IWYU pragma private; include "UnityEngine/BootConfigData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BootConfigData)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class BootConfigData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::BootConfigData);
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.BootConfigData
class CORDL_TYPE BootConfigData : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  static inline ::UnityEngine::BootConfigData* New_ctor(::System::IntPtr nativeHandle);

  /// @brief Method WrapBootConfigData, addr 0x689c62c, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::BootConfigData* WrapBootConfigData(::System::IntPtr nativeHandle);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x689c688, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr nativeHandle);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BootConfigData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BootConfigData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BootConfigData(BootConfigData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BootConfigData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BootConfigData(BootConfigData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10054 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::BootConfigData, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::BootConfigData, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::BootConfigData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BootConfigData*, "UnityEngine", "BootConfigData");
