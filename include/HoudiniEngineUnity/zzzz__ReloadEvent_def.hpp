#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
CORDL_MODULE_EXPORT(ReloadEvent)
// Forward declare root types
namespace HoudiniEngineUnity {
class ReloadEvent;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::ReloadEvent);
// Type: HoudiniEngineUnity::ReloadEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10467), inst: 5233 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3843), inst: 311 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3843)), TypeDefinitionIndex(TypeDefinitionIndex(10467)), TypeDefinitionIndex(TypeDefinitionIndex(10196)), TypeDefinitionIndex(TypeDefinitionIndex(9639))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9600))
// CS Name: ::HoudiniEngineUnity::ReloadEvent*
class CORDL_TYPE ReloadEvent : public ::UnityEngine::Events::UnityEvent_3<::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::ReloadEvent* New_ctor();

  /// @brief Method .ctor, addr 0x214e3b8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ReloadEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReloadEvent(ReloadEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReloadEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReloadEvent(ReloadEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReloadEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::ReloadEvent, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::ReloadEvent);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::ReloadEvent*, "HoudiniEngineUnity", "ReloadEvent");
