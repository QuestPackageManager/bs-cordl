#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePass_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePass)
namespace GlobalNamespace {
class BloomPrePassRenderDataSO;
}
namespace GlobalNamespace {
class __BloomPrePassRenderDataSO__Data;
}
namespace GlobalNamespace {
struct __BloomPrePass__Mode;
}
namespace GlobalNamespace {
class BloomPrePassRendererSO;
}
namespace GlobalNamespace {
class BloomPrePassEffectContainerSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct __BloomPrePass__Mode;
}
namespace GlobalNamespace {
class BloomPrePass;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BloomPrePass__Mode);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePass);
// Type: ::Mode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14454))
// CS Name: ::BloomPrePass::Mode
struct CORDL_TYPE __BloomPrePass__Mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BloomPrePass__Mode_Unwrapped
  enum struct ____BloomPrePass__Mode_Unwrapped : int32_t {
    __E_RenderAndSetData = static_cast<int32_t>(0x0),
    __E_SetDataOnly = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BloomPrePass__Mode_Unwrapped() const noexcept {
    return static_cast<____BloomPrePass__Mode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BloomPrePass__Mode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BloomPrePass__Mode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field RenderAndSetData value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__BloomPrePass__Mode const RenderAndSetData;

  /// @brief Field SetDataOnly value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__BloomPrePass__Mode const SetDataOnly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePass__Mode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePass__Mode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BloomPrePass
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(14454))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14455))
// CS Name: ::BloomPrePass*
class CORDL_TYPE BloomPrePass : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Mode = ::GlobalNamespace::__BloomPrePass__Mode;

  /// @brief Field _bloomPrepassRenderer, offset 0x18, size 0x8
  __declspec(property(get = __get__bloomPrepassRenderer, put = __set__bloomPrepassRenderer))::GlobalNamespace::BloomPrePassRendererSO* _bloomPrepassRenderer;

  /// @brief Field _bloomPrePassEffectContainer, offset 0x20, size 0x8
  __declspec(property(get = __get__bloomPrePassEffectContainer, put = __set__bloomPrePassEffectContainer))::GlobalNamespace::BloomPrePassEffectContainerSO* _bloomPrePassEffectContainer;

  /// @brief Field _bloomPrePassRenderData, offset 0x28, size 0x8
  __declspec(property(get = __get__bloomPrePassRenderData, put = __set__bloomPrePassRenderData))::GlobalNamespace::BloomPrePassRenderDataSO* _bloomPrePassRenderData;

  /// @brief Field _mode, offset 0x30, size 0x4
  __declspec(property(get = __get__mode, put = __set__mode))::GlobalNamespace::__BloomPrePass__Mode _mode;

  /// @brief Field _renderData, offset 0x38, size 0x8
  __declspec(property(get = __get__renderData, put = __set__renderData))::GlobalNamespace::__BloomPrePassRenderDataSO__Data* _renderData;

  constexpr ::GlobalNamespace::BloomPrePassRendererSO*& __get__bloomPrepassRenderer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassRendererSO*> const& __get__bloomPrepassRenderer() const;

  constexpr void __set__bloomPrepassRenderer(::GlobalNamespace::BloomPrePassRendererSO* value);

  constexpr ::GlobalNamespace::BloomPrePassEffectContainerSO*& __get__bloomPrePassEffectContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassEffectContainerSO*> const& __get__bloomPrePassEffectContainer() const;

  constexpr void __set__bloomPrePassEffectContainer(::GlobalNamespace::BloomPrePassEffectContainerSO* value);

  constexpr ::GlobalNamespace::BloomPrePassRenderDataSO*& __get__bloomPrePassRenderData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassRenderDataSO*> const& __get__bloomPrePassRenderData() const;

  constexpr void __set__bloomPrePassRenderData(::GlobalNamespace::BloomPrePassRenderDataSO* value);

  constexpr ::GlobalNamespace::__BloomPrePass__Mode& __get__mode();

  constexpr ::GlobalNamespace::__BloomPrePass__Mode const& __get__mode() const;

  constexpr void __set__mode(::GlobalNamespace::__BloomPrePass__Mode value);

  constexpr ::GlobalNamespace::__BloomPrePassRenderDataSO__Data*& __get__renderData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*> const& __get__renderData() const;

  constexpr void __set__renderData(::GlobalNamespace::__BloomPrePassRenderDataSO__Data* value);

  /// @brief Method Awake, addr 0x2102840, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method LazyInit, addr 0x2102844, size 0xc8, virtual false, abstract: false, final false
  inline void LazyInit();

  /// @brief Method OnDestroy, addr 0x2102a58, size 0xac, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnPreRender, addr 0x2102b04, size 0x24c, virtual false, abstract: false, final false
  inline void OnPreRender();

  /// @brief Method OnPostRender, addr 0x2103d04, size 0x94, virtual false, abstract: false, final false
  inline void OnPostRender();

  /// @brief Method SetMode, addr 0x2103db4, size 0x8, virtual false, abstract: false, final false
  inline void SetMode(::GlobalNamespace::__BloomPrePass__Mode mode);

  static inline ::GlobalNamespace::BloomPrePass* New_ctor();

  /// @brief Method .ctor, addr 0x2103dbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePass(BloomPrePass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePass(BloomPrePass const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePass();

public:
  /// @brief Field _bloomPrepassRenderer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BloomPrePassRendererSO* ____bloomPrepassRenderer;

  /// @brief Field _bloomPrePassEffectContainer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BloomPrePassEffectContainerSO* ____bloomPrePassEffectContainer;

  /// @brief Field _bloomPrePassRenderData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BloomPrePassRenderDataSO* ____bloomPrePassRenderData;

  /// @brief Field _mode, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__BloomPrePass__Mode ____mode;

  /// @brief Field _renderData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__BloomPrePassRenderDataSO__Data* ____renderData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePass, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePass, ____bloomPrepassRenderer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePass, ____bloomPrePassEffectContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePass, ____bloomPrePassRenderData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePass, ____mode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePass, ____renderData) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePass__Mode, "", "BloomPrePass/Mode");
NEED_NO_BOX(::GlobalNamespace::BloomPrePass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePass*, "", "BloomPrePass");
