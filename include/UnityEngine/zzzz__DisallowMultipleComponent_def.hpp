#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DisallowMultipleComponent)
// Forward declare root types
namespace UnityEngine {
class DisallowMultipleComponent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::DisallowMultipleComponent);
// Type: UnityEngine::DisallowMultipleComponent
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::DisallowMultipleComponent*
class CORDL_TYPE DisallowMultipleComponent : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::DisallowMultipleComponent* New_ctor();

  /// @brief Method .ctor, addr 0x3209964, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisallowMultipleComponent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisallowMultipleComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisallowMultipleComponent(DisallowMultipleComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisallowMultipleComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisallowMultipleComponent(DisallowMultipleComponent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::DisallowMultipleComponent, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::DisallowMultipleComponent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DisallowMultipleComponent*, "UnityEngine", "DisallowMultipleComponent");
