#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(GuiRenderer)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class GuiRenderableManager;
}
// Forward declare root types
namespace Zenject {
class GuiRenderer;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::GuiRenderer);
// Type: Zenject::GuiRenderer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11244))
// CS Name: ::Zenject::GuiRenderer*
class CORDL_TYPE GuiRenderer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _renderableManager, offset 0x18, size 0x8
  __declspec(property(get = __get__renderableManager, put = __set__renderableManager))::Zenject::GuiRenderableManager* _renderableManager;

  constexpr ::Zenject::GuiRenderableManager*& __get__renderableManager();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GuiRenderableManager*> const& __get__renderableManager() const;

  constexpr void __set__renderableManager(::Zenject::GuiRenderableManager* value);

  /// @brief Method Construct addr 0x2dab1b4 size 0x8 virtual false final false
  inline void Construct(::Zenject::GuiRenderableManager* renderableManager);

  /// @brief Method OnGUI addr 0x2dab1bc size 0x18 virtual false final false
  inline void OnGUI();

  static inline ::Zenject::GuiRenderer* New_ctor();

  /// @brief Method .ctor addr 0x2dab1d4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method __zenInjectMethod0 addr 0x2dab1dc size 0xdc virtual false final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2dab2b8 size 0x2f8 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "GuiRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GuiRenderer(GuiRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GuiRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GuiRenderer(GuiRenderer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GuiRenderer();

public:
  /// @brief Field _renderableManager, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GuiRenderableManager* ____renderableManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::GuiRenderer, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::GuiRenderer, ____renderableManager) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::GuiRenderer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GuiRenderer*, "Zenject", "GuiRenderer");
