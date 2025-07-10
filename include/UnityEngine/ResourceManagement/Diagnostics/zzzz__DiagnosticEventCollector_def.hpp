#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Diagnostics/DiagnosticEventCollector.hpp"
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
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::ResourceManagement::Diagnostics {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector
class CORDL_TYPE DiagnosticEventCollector : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field s_Collector, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Collector, put = setStaticF_s_Collector)) ::UnityW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector> s_Collector;

  /// @brief Method FindOrCreateGlobalInstance, addr 0x47a3a24, size 0x1c0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector> FindOrCreateGlobalInstance();

  static inline ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector* New_ctor();

  /// @brief Method PostEvent, addr 0x47a3c44, size 0x80, virtual false, abstract: false, final false
  inline void PostEvent(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent diagnosticEvent);

  /// @brief Method RegisterEventHandler, addr 0x47a3be4, size 0xc, virtual false, abstract: false, final false
  static inline bool RegisterEventHandler(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* handler, bool _cordl_register, bool create);

  /// @brief Method UnregisterEventHandler, addr 0x47a3bf0, size 0x54, virtual false, abstract: false, final false
  inline void UnregisterEventHandler(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* handler);

  /// @brief Method .ctor, addr 0x47a3cc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector> getStaticF_s_Collector();

  /// @brief Method get_PlayerConnectionGuid, addr 0x47a3a20, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Guid get_PlayerConnectionGuid();

  static inline void setStaticF_s_Collector(::UnityW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticEventCollector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticEventCollector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticEventCollector(DiagnosticEventCollector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticEventCollector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticEventCollector(DiagnosticEventCollector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15696 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Diagnostics
NEED_NO_BOX(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*, "UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEventCollector");
