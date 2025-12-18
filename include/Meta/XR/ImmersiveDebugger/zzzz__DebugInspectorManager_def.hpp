#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/DebugInspectorManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__DebugManagerAddon_1_def.hpp"
CORDL_MODULE_EXPORT(DebugInspectorManager)
namespace Meta::XR::ImmersiveDebugger::Manager {
struct Category;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugInspector;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
namespace Meta::XR::ImmersiveDebugger {
struct Telemetry_Method;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
class DebugInspectorManager;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::DebugInspectorManager);
// Dependencies Meta.XR.ImmersiveDebugger.Manager.DebugManagerAddon`1<Type>
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.DebugInspectorManager
class CORDL_TYPE DebugInspectorManager : public ::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*> {
public:
  // Declarations
  __declspec(property(get = get_Method)) ::Meta::XR::ImmersiveDebugger::Telemetry_Method Method;

  /// @brief Field _inspectors, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__inspectors,
                      put = __cordl_internal_set__inspectors)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::DebugInspector>>* _inspectors;

  /// @brief Method FetchCategory, addr 0x58916b0, size 0x18, virtual false, abstract: false, final false
  static inline ::Meta::XR::ImmersiveDebugger::Manager::Category FetchCategory(::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  static inline ::Meta::XR::ImmersiveDebugger::DebugInspectorManager* New_ctor();

  /// @brief Method OnReadyInternal, addr 0x5891438, size 0xfc, virtual true, abstract: false, final false
  inline void OnReadyInternal();

  /// @brief Method ProcessInspector, addr 0x5890c48, size 0x4d0, virtual false, abstract: false, final false
  inline void ProcessInspector(::Meta::XR::ImmersiveDebugger::DebugInspector* inspector);

  /// @brief Method RegisterInspector, addr 0x58903e8, size 0xb4, virtual false, abstract: false, final false
  inline void RegisterInspector(::Meta::XR::ImmersiveDebugger::DebugInspector* inspector);

  /// @brief Method UnprocessInspector, addr 0x5891118, size 0x318, virtual false, abstract: false, final false
  inline void UnprocessInspector(::Meta::XR::ImmersiveDebugger::DebugInspector* inspector);

  /// @brief Method UnregisterInspector, addr 0x58904f4, size 0x70, virtual false, abstract: false, final false
  inline void UnregisterInspector(::Meta::XR::ImmersiveDebugger::DebugInspector* inspector);

  /// @brief Method UpdateCategory, addr 0x5891680, size 0x30, virtual false, abstract: false, final false
  inline void UpdateCategory(::Meta::XR::ImmersiveDebugger::DebugMember* attribute, ::Meta::XR::ImmersiveDebugger::DebugInspector* inspector);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::DebugInspector>>* const& __cordl_internal_get__inspectors() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::DebugInspector>>*& __cordl_internal_get__inspectors();

  constexpr void __cordl_internal_set__inspectors(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::DebugInspector>>* value);

  /// @brief Method .ctor, addr 0x5891780, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Method, addr 0x5891430, size 0x8, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Telemetry_Method get_Method();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugInspectorManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugInspectorManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugInspectorManager(DebugInspectorManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugInspectorManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugInspectorManager(DebugInspectorManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18293 };

  /// @brief Field _inspectors, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::DebugInspector>>* ____inspectors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::DebugInspectorManager, ____inspectors) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::DebugInspectorManager, 0x28>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::DebugInspectorManager);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::DebugInspectorManager*, "Meta.XR.ImmersiveDebugger", "DebugInspectorManager");
