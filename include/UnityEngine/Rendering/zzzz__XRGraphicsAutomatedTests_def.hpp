#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/XRGraphicsAutomatedTests.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRGraphicsAutomatedTests)
namespace UnityEngine::Experimental::Rendering {
class XRLayout;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class XRGraphicsAutomatedTests;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::XRGraphicsAutomatedTests);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.XRGraphicsAutomatedTests
class CORDL_TYPE XRGraphicsAutomatedTests : public ::System::Object {
public:
  // Declarations
  /// @brief Field <enabled>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__enabled_k__BackingField, put = setStaticF__enabled_k__BackingField)) bool _enabled_k__BackingField;

  /// @brief Field running, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_running, put = setStaticF_running)) bool running;

  /// @brief Method OverrideLayout, addr 0x65b08e8, size 0x51c, virtual false, abstract: false, final false
  static inline void OverrideLayout(::UnityEngine::Experimental::Rendering::XRLayout* layout, ::UnityEngine::Camera* camera);

  static inline bool getStaticF__enabled_k__BackingField();

  static inline bool getStaticF_running();

  /// @brief Method get_activatedFromCommandLine, addr 0x65b0884, size 0x8, virtual false, abstract: false, final false
  static inline bool get_activatedFromCommandLine();

  /// @brief Method get_enabled, addr 0x65b088c, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_enabled();

  static inline void setStaticF__enabled_k__BackingField(bool value);

  static inline void setStaticF_running(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRGraphicsAutomatedTests();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRGraphicsAutomatedTests", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRGraphicsAutomatedTests(XRGraphicsAutomatedTests&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRGraphicsAutomatedTests", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRGraphicsAutomatedTests(XRGraphicsAutomatedTests const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12349 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::XRGraphicsAutomatedTests, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::XRGraphicsAutomatedTests);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::XRGraphicsAutomatedTests*, "UnityEngine.Rendering", "XRGraphicsAutomatedTests");
