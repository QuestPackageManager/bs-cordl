#pragma once
// IWYU pragma private; include "UnityEngine/LayerMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayerMask)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine {
struct LayerMask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LayerMask);
DEFINE_IL2CPP_CLASS(::UnityEngine::LayerMask, "UnityEngine", "LayerMask");
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.LayerMask
struct CORDL_TYPE LayerMask {
public:
  // Declarations
  __declspec(property(get = get_value, put = set_value)) int32_t value;

  /// @brief Method GetMask, addr 0x6ae0b00, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t GetMask(::ArrayW<::StringW> layerNames);

  /// @brief Method NameToLayer, addr 0x6ae0998, size 0x12c, virtual false, abstract: false, final false
  static inline int32_t NameToLayer(::StringW layerName);

  /// @brief Method NameToLayer_Injected, addr 0x6ae0ac4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t NameToLayer_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> layerName);

  /// @brief Method get_value, addr 0x6ae0988, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_value();

  /// @brief Method op_Implicit, addr 0x6ae0984, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::LayerMask op_Implicit___UnityEngine__LayerMask(int32_t intVal);

  /// @brief Method op_Implicit, addr 0x6ae0980, size 0x4, virtual false, abstract: false, final false
  static inline int32_t op_Implicit_int32_t(::UnityEngine::LayerMask mask);

  /// @brief Method set_value, addr 0x6ae0990, size 0x8, virtual false, abstract: false, final false
  inline void set_value(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayerMask();

  // Ctor Parameters [CppParam { name: "m_Mask", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LayerMask(int32_t m_Mask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10323 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Mask, offset: 0x0, size: 0x4, def value: None
  int32_t m_Mask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LayerMask, m_Mask) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LayerMask) == 0x4, "Size mismatch!");

} // namespace UnityEngine
