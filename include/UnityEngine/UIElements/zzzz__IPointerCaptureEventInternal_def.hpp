#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IPointerCaptureEventInternal)
// Forward declare root types
namespace UnityEngine::UIElements {
class IPointerCaptureEventInternal;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IPointerCaptureEventInternal);
// Type: UnityEngine.UIElements::IPointerCaptureEventInternal
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7149))
// CS Name: ::UnityEngine.UIElements::IPointerCaptureEventInternal*
class CORDL_TYPE IPointerCaptureEventInternal {
public:
  // Declarations
  __declspec(property(get = get_pointerId)) int32_t pointerId;

  /// @brief Method get_pointerId addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_pointerId();

  // Ctor Parameters [CppParam { name: "", ty: "IPointerCaptureEventInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPointerCaptureEventInternal(IPointerCaptureEventInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPointerCaptureEventInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPointerCaptureEventInternal(IPointerCaptureEventInternal const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IPointerCaptureEventInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IPointerCaptureEventInternal*, "UnityEngine.UIElements", "IPointerCaptureEventInternal");
