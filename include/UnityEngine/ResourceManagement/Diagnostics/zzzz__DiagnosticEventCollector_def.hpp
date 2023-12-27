#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DiagnosticEventCollector)
namespace System {
template <typename T> class Action_1;
}
namespace System {
struct Guid;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Diagnostics {
class DiagnosticEventCollector;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector);
// Type: UnityEngine.ResourceManagement.Diagnostics::DiagnosticEventCollector
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14027))
// CS Name: ::UnityEngine.ResourceManagement.Diagnostics::DiagnosticEventCollector*
class CORDL_TYPE DiagnosticEventCollector : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field s_Collector, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Collector, put = setStaticF_s_Collector))::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector* s_Collector;

  static inline void setStaticF_s_Collector(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector* value);

  static inline ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector* getStaticF_s_Collector();

  /// @brief Method get_PlayerConnectionGuid addr 0x2bdc5ac size 0x4 virtual false final false
  static inline ::System::Guid get_PlayerConnectionGuid();

  /// @brief Method FindOrCreateGlobalInstance addr 0x2bdc5b0 size 0x1c8 virtual false final false
  static inline ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector* FindOrCreateGlobalInstance();

  /// @brief Method RegisterEventHandler addr 0x2bdc778 size 0xc virtual false final false
  static inline bool RegisterEventHandler(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* handler, bool _cordl_register, bool create);

  /// @brief Method UnregisterEventHandler addr 0x2bdc784 size 0x54 virtual false final false
  inline void UnregisterEventHandler(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* handler);

  /// @brief Method PostEvent addr 0x2bdc7d8 size 0x80 virtual false final false
  inline void PostEvent(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent diagnosticEvent);

  static inline ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector* New_ctor();

  /// @brief Method .ctor addr 0x2bdc858 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticEventCollector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticEventCollector(DiagnosticEventCollector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticEventCollector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticEventCollector(DiagnosticEventCollector const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticEventCollector();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Diagnostics
NEED_NO_BOX(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*, "UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEventCollector");
