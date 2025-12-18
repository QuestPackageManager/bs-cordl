#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugOverlay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugOverlay)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DebugOverlay;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugOverlay);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugOverlay
class CORDL_TYPE DebugOverlay : public ::System::Object {
public:
  // Declarations
  /// @brief Field <overlaySize>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__overlaySize_k__BackingField, put = __cordl_internal_set__overlaySize_k__BackingField)) int32_t _overlaySize_k__BackingField;

  /// @brief Field <x>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__x_k__BackingField, put = __cordl_internal_set__x_k__BackingField)) int32_t _x_k__BackingField;

  /// @brief Field <y>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__y_k__BackingField, put = __cordl_internal_set__y_k__BackingField)) int32_t _y_k__BackingField;

  /// @brief Field m_InitialPositionX, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InitialPositionX, put = __cordl_internal_set_m_InitialPositionX)) int32_t m_InitialPositionX;

  /// @brief Field m_ScreenWidth, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScreenWidth, put = __cordl_internal_set_m_ScreenWidth)) int32_t m_ScreenWidth;

  __declspec(property(get = get_overlaySize, put = set_overlaySize)) int32_t overlaySize;

  __declspec(property(get = get_x, put = set_x)) int32_t x;

  __declspec(property(get = get_y, put = set_y)) int32_t y;

  static inline ::UnityEngine::Rendering::DebugOverlay* New_ctor();

  /// @brief Method Next, addr 0x65b0914, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect Next(float_t aspect);

  /// @brief Method SetViewport, addr 0x65b0984, size 0x30, virtual false, abstract: false, final false
  inline void SetViewport(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method StartOverlay, addr 0x65b0904, size 0x10, virtual false, abstract: false, final false
  inline void StartOverlay(int32_t initialX, int32_t initialY, int32_t overlaySize, int32_t screenWidth);

  constexpr int32_t const& __cordl_internal_get__overlaySize_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__overlaySize_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__x_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__x_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__y_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__y_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_InitialPositionX() const;

  constexpr int32_t& __cordl_internal_get_m_InitialPositionX();

  constexpr int32_t const& __cordl_internal_get_m_ScreenWidth() const;

  constexpr int32_t& __cordl_internal_get_m_ScreenWidth();

  constexpr void __cordl_internal_set__overlaySize_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__x_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__y_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_InitialPositionX(int32_t value);

  constexpr void __cordl_internal_set_m_ScreenWidth(int32_t value);

  /// @brief Method .ctor, addr 0x65b09b4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_overlaySize, addr 0x65b08f4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_overlaySize();

  /// @brief Method get_x, addr 0x65b08d4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_x();

  /// @brief Method get_y, addr 0x65b08e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_y();

  /// @brief Method set_overlaySize, addr 0x65b08fc, size 0x8, virtual false, abstract: false, final false
  inline void set_overlaySize(int32_t value);

  /// @brief Method set_x, addr 0x65b08dc, size 0x8, virtual false, abstract: false, final false
  inline void set_x(int32_t value);

  /// @brief Method set_y, addr 0x65b08ec, size 0x8, virtual false, abstract: false, final false
  inline void set_y(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugOverlay(DebugOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugOverlay(DebugOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11963 };

  /// @brief Field <x>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____x_k__BackingField;

  /// @brief Field <y>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____y_k__BackingField;

  /// @brief Field <overlaySize>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____overlaySize_k__BackingField;

  /// @brief Field m_InitialPositionX, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_InitialPositionX;

  /// @brief Field m_ScreenWidth, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_ScreenWidth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugOverlay, ____x_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugOverlay, ____y_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugOverlay, ____overlaySize_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugOverlay, ___m_InitialPositionX) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugOverlay, ___m_ScreenWidth) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugOverlay, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DebugOverlay);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugOverlay*, "UnityEngine.Rendering", "DebugOverlay");
