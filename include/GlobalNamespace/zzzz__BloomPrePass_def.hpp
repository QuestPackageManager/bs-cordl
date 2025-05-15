#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePass)
namespace GlobalNamespace {
class BloomPrePassEffectContainerSO;
}
namespace GlobalNamespace {
class BloomPrePassRenderDataSO_Data;
}
namespace GlobalNamespace {
class BloomPrePassRenderDataSO;
}
namespace GlobalNamespace {
class BloomPrePassRendererSO;
}
namespace GlobalNamespace {
struct BloomPrePass_Mode;
}
// Forward declare root types
namespace GlobalNamespace {
struct BloomPrePass_Mode;
}
namespace GlobalNamespace {
class BloomPrePass;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BloomPrePass_Mode);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePass);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BloomPrePass/Mode
struct CORDL_TYPE BloomPrePass_Mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BloomPrePass_Mode_Unwrapped
  enum struct __BloomPrePass_Mode_Unwrapped : int32_t {
    __E_RenderAndSetData = static_cast<int32_t>(0x0),
    __E_SetDataOnly = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BloomPrePass_Mode_Unwrapped() const noexcept {
    return static_cast<__BloomPrePass_Mode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePass_Mode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BloomPrePass_Mode(int32_t value__) noexcept;

  /// @brief Field RenderAndSetData value: I32(0)
  static ::GlobalNamespace::BloomPrePass_Mode const RenderAndSetData;

  /// @brief Field SetDataOnly value: I32(1)
  static ::GlobalNamespace::BloomPrePass_Mode const SetDataOnly;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16241 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePass_Mode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePass_Mode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BloomPrePass::Mode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePass
class CORDL_TYPE BloomPrePass : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Mode = ::GlobalNamespace::BloomPrePass_Mode;

  /// @brief Field _bloomPrePassEffectContainer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassEffectContainer, put = __cordl_internal_set__bloomPrePassEffectContainer)) ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO>
      _bloomPrePassEffectContainer;

  /// @brief Field _bloomPrePassRenderData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassRenderData, put = __cordl_internal_set__bloomPrePassRenderData)) ::UnityW<::GlobalNamespace::BloomPrePassRenderDataSO>
      _bloomPrePassRenderData;

  /// @brief Field _bloomPrepassRenderer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrepassRenderer, put = __cordl_internal_set__bloomPrepassRenderer)) ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> _bloomPrepassRenderer;

  /// @brief Field _mode, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__mode, put = __cordl_internal_set__mode)) ::GlobalNamespace::BloomPrePass_Mode _mode;

  /// @brief Field _renderData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__renderData, put = __cordl_internal_set__renderData)) ::GlobalNamespace::BloomPrePassRenderDataSO_Data* _renderData;

  /// @brief Method Awake, addr 0x39d4d78, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method LazyInit, addr 0x39d4d7c, size 0xc4, virtual false, abstract: false, final false
  inline void LazyInit();

  static inline ::GlobalNamespace::BloomPrePass* New_ctor();

  /// @brief Method OnDestroy, addr 0x39d4f88, size 0xac, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnPostRender, addr 0x39d61fc, size 0x94, virtual false, abstract: false, final false
  inline void OnPostRender();

  /// @brief Method OnPreRender, addr 0x39d5034, size 0x254, virtual false, abstract: false, final false
  inline void OnPreRender();

  /// @brief Method SetMode, addr 0x39d62ac, size 0x8, virtual false, abstract: false, final false
  inline void SetMode(::GlobalNamespace::BloomPrePass_Mode mode);

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> const& __cordl_internal_get__bloomPrePassEffectContainer() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO>& __cordl_internal_get__bloomPrePassEffectContainer();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassRenderDataSO> const& __cordl_internal_get__bloomPrePassRenderData() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassRenderDataSO>& __cordl_internal_get__bloomPrePassRenderData();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> const& __cordl_internal_get__bloomPrepassRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO>& __cordl_internal_get__bloomPrepassRenderer();

  constexpr ::GlobalNamespace::BloomPrePass_Mode const& __cordl_internal_get__mode() const;

  constexpr ::GlobalNamespace::BloomPrePass_Mode& __cordl_internal_get__mode();

  constexpr ::GlobalNamespace::BloomPrePassRenderDataSO_Data* const& __cordl_internal_get__renderData() const;

  constexpr ::GlobalNamespace::BloomPrePassRenderDataSO_Data*& __cordl_internal_get__renderData();

  constexpr void __cordl_internal_set__bloomPrePassEffectContainer(::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> value);

  constexpr void __cordl_internal_set__bloomPrePassRenderData(::UnityW<::GlobalNamespace::BloomPrePassRenderDataSO> value);

  constexpr void __cordl_internal_set__bloomPrepassRenderer(::UnityW<::GlobalNamespace::BloomPrePassRendererSO> value);

  constexpr void __cordl_internal_set__mode(::GlobalNamespace::BloomPrePass_Mode value);

  constexpr void __cordl_internal_set__renderData(::GlobalNamespace::BloomPrePassRenderDataSO_Data* value);

  /// @brief Method .ctor, addr 0x39d62b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePass(BloomPrePass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePass(BloomPrePass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16242 };

  /// @brief Field _bloomPrepassRenderer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> ____bloomPrepassRenderer;

  /// @brief Field _bloomPrePassEffectContainer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> ____bloomPrePassEffectContainer;

  /// @brief Field _bloomPrePassRenderData, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassRenderDataSO> ____bloomPrePassRenderData;

  /// @brief Field _mode, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::BloomPrePass_Mode ____mode;

  /// @brief Field _renderData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BloomPrePassRenderDataSO_Data* ____renderData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePass, ____bloomPrepassRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePass, ____bloomPrePassEffectContainer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePass, ____bloomPrePassRenderData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePass, ____mode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePass, ____renderData) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePass, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePass_Mode, "", "BloomPrePass/Mode");
NEED_NO_BOX(::GlobalNamespace::BloomPrePass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePass*, "", "BloomPrePass");
