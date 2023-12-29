#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MonobehaviourCallbacksOrderDebuger)
// Forward declare root types
namespace GlobalNamespace {
class MonobehaviourCallbacksOrderDebuger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MonobehaviourCallbacksOrderDebuger);
// Type: ::MonobehaviourCallbacksOrderDebuger
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13876))
// CS Name: ::MonobehaviourCallbacksOrderDebuger*
class CORDL_TYPE MonobehaviourCallbacksOrderDebuger : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Awake addr 0x1f97608 size 0xa4 virtual false final false
  inline void Awake();

  /// @brief Method OnEnable addr 0x1f976ac size 0xa4 virtual false final false
  inline void OnEnable();

  /// @brief Method Start addr 0x1f97750 size 0xa4 virtual false final false
  inline void Start();

  static inline ::GlobalNamespace::MonobehaviourCallbacksOrderDebuger* New_ctor();

  /// @brief Method .ctor addr 0x1f977f4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MonobehaviourCallbacksOrderDebuger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonobehaviourCallbacksOrderDebuger(MonobehaviourCallbacksOrderDebuger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonobehaviourCallbacksOrderDebuger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonobehaviourCallbacksOrderDebuger(MonobehaviourCallbacksOrderDebuger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonobehaviourCallbacksOrderDebuger();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MonobehaviourCallbacksOrderDebuger, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MonobehaviourCallbacksOrderDebuger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MonobehaviourCallbacksOrderDebuger*, "", "MonobehaviourCallbacksOrderDebuger");
