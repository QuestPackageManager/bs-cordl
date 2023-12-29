#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ContinuousEvent)
// Forward declare root types
namespace UnityEngine::Analytics {
class ContinuousEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::ContinuousEvent);
// Type: UnityEngine.Analytics::ContinuousEvent
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Analytics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15942))
// CS Name: ::UnityEngine.Analytics::ContinuousEvent*
class CORDL_TYPE ContinuousEvent : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "ContinuousEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContinuousEvent(ContinuousEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContinuousEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContinuousEvent(ContinuousEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContinuousEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::ContinuousEvent, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::ContinuousEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::ContinuousEvent*, "UnityEngine.Analytics", "ContinuousEvent");
