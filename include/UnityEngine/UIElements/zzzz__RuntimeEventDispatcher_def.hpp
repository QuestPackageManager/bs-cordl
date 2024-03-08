#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RuntimeEventDispatcher)
namespace UnityEngine::UIElements {
class EventDispatcher;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RuntimeEventDispatcher;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RuntimeEventDispatcher);
// Type: UnityEngine.UIElements::RuntimeEventDispatcher
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::RuntimeEventDispatcher*
class CORDL_TYPE RuntimeEventDispatcher : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x2f7f2b8, size 0x3cc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventDispatcher* Create();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeEventDispatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeEventDispatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeEventDispatcher(RuntimeEventDispatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeEventDispatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeEventDispatcher(RuntimeEventDispatcher const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RuntimeEventDispatcher, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RuntimeEventDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RuntimeEventDispatcher*, "UnityEngine.UIElements", "RuntimeEventDispatcher");
