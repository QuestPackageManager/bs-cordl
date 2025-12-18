#pragma once
// IWYU pragma private; include "GlobalNamespace/IRefractorDebuggerSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IRefractorDebuggerSettings)
// Forward declare root types
namespace GlobalNamespace {
class IRefractorDebuggerSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IRefractorDebuggerSettings);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IRefractorDebuggerSettings
class CORDL_TYPE IRefractorDebuggerSettings {
public:
  // Declarations
  __declspec(property(get = get_addMissingLightActions)) bool addMissingLightActions;

  /// @brief Method InvokeLightRetargetEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InvokeLightRetargetEvent(int32_t lightId, int32_t refractId);

  /// @brief Method get_addMissingLightActions, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_addMissingLightActions();

  // Ctor Parameters [CppParam { name: "", ty: "IRefractorDebuggerSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRefractorDebuggerSettings(IRefractorDebuggerSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15010 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IRefractorDebuggerSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IRefractorDebuggerSettings*, "", "IRefractorDebuggerSettings");
