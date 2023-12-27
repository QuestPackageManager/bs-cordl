#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IUpdateReceiver)
// Forward declare root types
namespace UnityEngine::ResourceManagement {
class IUpdateReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::IUpdateReceiver);
// Type: UnityEngine.ResourceManagement::IUpdateReceiver
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13958))
// CS Name: ::UnityEngine.ResourceManagement::IUpdateReceiver*
class CORDL_TYPE IUpdateReceiver {
public:
  // Declarations
  /// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Update(float_t unscaledDeltaTime);

  // Ctor Parameters [CppParam { name: "", ty: "IUpdateReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUpdateReceiver(IUpdateReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUpdateReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUpdateReceiver(IUpdateReceiver const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement
NEED_NO_BOX(::UnityEngine::ResourceManagement::IUpdateReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::IUpdateReceiver*, "UnityEngine.ResourceManagement", "IUpdateReceiver");
