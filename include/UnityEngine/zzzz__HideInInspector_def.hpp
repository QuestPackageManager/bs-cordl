#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(HideInInspector)
// Forward declare root types
namespace UnityEngine {
class HideInInspector;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::HideInInspector);
// Type: UnityEngine::HideInInspector
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::HideInInspector*
class CORDL_TYPE HideInInspector : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::HideInInspector* New_ctor();

  /// @brief Method .ctor, addr 0x3209af8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HideInInspector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HideInInspector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HideInInspector(HideInInspector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HideInInspector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HideInInspector(HideInInspector const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HideInInspector, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::HideInInspector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HideInInspector*, "UnityEngine", "HideInInspector");
