#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatUnityEvent)
// Forward declare root types
namespace GlobalNamespace {
class FloatUnityEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatUnityEvent);
// Type: ::FloatUnityEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10387), inst: 387 }), TypeDefinitionIndex(TypeDefinitionIndex(10387))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13965))
// CS Name: ::FloatUnityEvent*
class CORDL_TYPE FloatUnityEvent : public ::UnityEngine::Events::UnityEvent_1<float_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::FloatUnityEvent* New_ctor();

  /// @brief Method .ctor addr 0x1fa2f30 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FloatUnityEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatUnityEvent(FloatUnityEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatUnityEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatUnityEvent(FloatUnityEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatUnityEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatUnityEvent, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatUnityEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatUnityEvent*, "", "FloatUnityEvent");
