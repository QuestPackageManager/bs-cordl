#pragma once
// IWYU pragma private; include "Zenject/GuiRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GuiRenderer)
namespace System {
class Object;
}
namespace Zenject {
class GuiRenderableManager;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class GuiRenderer;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::GuiRenderer);
// Dependencies UnityEngine.MonoBehaviour
namespace Zenject {
// Is value type: false
// CS Name: Zenject.GuiRenderer
class CORDL_TYPE GuiRenderer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _renderableManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__renderableManager, put = __cordl_internal_set__renderableManager)) ::Zenject::GuiRenderableManager* _renderableManager;

  /// @brief Method Construct, addr 0x4b55518, size 0x8, virtual false, abstract: false, final false
  inline void Construct(::Zenject::GuiRenderableManager* renderableManager);

  static inline ::Zenject::GuiRenderer* New_ctor();

  /// @brief Method OnGUI, addr 0x4b55520, size 0x18, virtual false, abstract: false, final false
  inline void OnGUI();

  constexpr ::Zenject::GuiRenderableManager* const& __cordl_internal_get__renderableManager() const;

  constexpr ::Zenject::GuiRenderableManager*& __cordl_internal_get__renderableManager();

  constexpr void __cordl_internal_set__renderableManager(::Zenject::GuiRenderableManager* value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b5561c, size 0x2fc, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenInjectMethod0, addr 0x4b55540, size 0xdc, virtual false, abstract: false, final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method .ctor, addr 0x4b55538, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GuiRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GuiRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GuiRenderer(GuiRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GuiRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GuiRenderer(GuiRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12658 };

  /// @brief Field _renderableManager, offset: 0x20, size: 0x8, def value: None
  ::Zenject::GuiRenderableManager* ____renderableManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::GuiRenderer, ____renderableManager) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::GuiRenderer, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::GuiRenderer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GuiRenderer*, "Zenject", "GuiRenderer");
