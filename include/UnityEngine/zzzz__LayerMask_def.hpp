#pragma once
// IWYU pragma private; include "UnityEngine/LayerMask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayerMask)
// Forward declare root types
namespace UnityEngine {
struct LayerMask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LayerMask);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.LayerMask
struct CORDL_TYPE LayerMask {
public:
  // Declarations
  __declspec(property(get = get_value, put = set_value)) int32_t value;

  /// @brief Method GetMask, addr 0x48ab080, size 0x104, virtual false, abstract: false, final false
  static inline int32_t GetMask(::ArrayW<::StringW, ::Array<::StringW>*> layerNames);

  /// @brief Method NameToLayer, addr 0x48ab044, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t NameToLayer(::StringW layerName);

  /// @brief Method get_value, addr 0x48ab034, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_value();

  /// @brief Method op_Implicit, addr 0x48ab02c, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::LayerMask op_Implicit___UnityEngine__LayerMask(int32_t intVal);

  /// @brief Method op_Implicit, addr 0x48ab028, size 0x4, virtual false, abstract: false, final false
  static inline int32_t op_Implicit_int32_t(::UnityEngine::LayerMask mask);

  /// @brief Method set_value, addr 0x48ab03c, size 0x8, virtual false, abstract: false, final false
  inline void set_value(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayerMask();

  // Ctor Parameters [CppParam { name: "m_Mask", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LayerMask(int32_t m_Mask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10890 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Mask, offset: 0x0, size: 0x4, def value: None
  int32_t m_Mask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LayerMask, m_Mask) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::LayerMask, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LayerMask, "UnityEngine", "LayerMask");
