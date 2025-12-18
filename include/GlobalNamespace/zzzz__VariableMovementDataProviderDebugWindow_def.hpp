#pragma once
// IWYU pragma private; include "GlobalNamespace/VariableMovementDataProviderDebugWindow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VariableMovementDataProviderDebugWindow)
namespace GlobalNamespace {
class VariableMovementDataProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class VariableMovementDataProviderDebugWindow;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VariableMovementDataProviderDebugWindow);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VariableMovementDataProviderDebugWindow
class CORDL_TYPE VariableMovementDataProviderDebugWindow : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _njs, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__njs, put = __cordl_internal_set__njs)) float_t _njs;

  /// @brief Field _variableMovementDataProvider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__variableMovementDataProvider,
                      put = __cordl_internal_set__variableMovementDataProvider)) ::GlobalNamespace::VariableMovementDataProvider* _variableMovementDataProvider;

  static inline ::GlobalNamespace::VariableMovementDataProviderDebugWindow* New_ctor();

  /// @brief Method OnGUI, addr 0x5721dd8, size 0xbf8, virtual false, abstract: false, final false
  inline void OnGUI();

  constexpr float_t const& __cordl_internal_get__njs() const;

  constexpr float_t& __cordl_internal_get__njs();

  constexpr ::GlobalNamespace::VariableMovementDataProvider* const& __cordl_internal_get__variableMovementDataProvider() const;

  constexpr ::GlobalNamespace::VariableMovementDataProvider*& __cordl_internal_get__variableMovementDataProvider();

  constexpr void __cordl_internal_set__njs(float_t value);

  constexpr void __cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::VariableMovementDataProvider* value);

  /// @brief Method .ctor, addr 0x57229d0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VariableMovementDataProviderDebugWindow();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VariableMovementDataProviderDebugWindow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VariableMovementDataProviderDebugWindow(VariableMovementDataProviderDebugWindow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VariableMovementDataProviderDebugWindow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VariableMovementDataProviderDebugWindow(VariableMovementDataProviderDebugWindow const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5652 };

  /// @brief Field _variableMovementDataProvider, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::VariableMovementDataProvider* ____variableMovementDataProvider;

  /// @brief Field _njs, offset: 0x28, size: 0x4, def value: None
  float_t ____njs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VariableMovementDataProviderDebugWindow, ____variableMovementDataProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProviderDebugWindow, ____njs) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VariableMovementDataProviderDebugWindow, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VariableMovementDataProviderDebugWindow);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VariableMovementDataProviderDebugWindow*, "", "VariableMovementDataProviderDebugWindow");
