#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MousePositionDebug.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MousePositionDebug)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class MousePositionDebug;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::MousePositionDebug);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.MousePositionDebug
class CORDL_TYPE MousePositionDebug : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::UnityEngine::Rendering::MousePositionDebug* s_Instance;

  /// @brief Method Build, addr 0x654ebc4, size 0x4, virtual false, abstract: false, final false
  inline void Build();

  /// @brief Method Cleanup, addr 0x654ebc8, size 0x4, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method GetInputMousePosition, addr 0x654ebd0, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetInputMousePosition();

  /// @brief Method GetMouseClickPosition, addr 0x654ec7c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetMouseClickPosition(float_t ScreenHeight);

  /// @brief Method GetMousePosition, addr 0x654ebcc, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetMousePosition(float_t ScreenHeight, bool sceneView);

  static inline ::UnityEngine::Rendering::MousePositionDebug* New_ctor();

  /// @brief Method .ctor, addr 0x654ebc0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::MousePositionDebug* getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x654eb50, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::MousePositionDebug* get_instance();

  static inline void setStaticF_s_Instance(::UnityEngine::Rendering::MousePositionDebug* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MousePositionDebug();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MousePositionDebug", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MousePositionDebug(MousePositionDebug&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MousePositionDebug", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MousePositionDebug(MousePositionDebug const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12020 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::MousePositionDebug, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::MousePositionDebug);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::MousePositionDebug*, "UnityEngine.Rendering", "MousePositionDebug");
