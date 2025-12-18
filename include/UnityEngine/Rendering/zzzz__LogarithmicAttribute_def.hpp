#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LogarithmicAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LogarithmicAttribute)
// Forward declare root types
namespace UnityEngine::Rendering {
class LogarithmicAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::LogarithmicAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LogarithmicAttribute
class CORDL_TYPE LogarithmicAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field max, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) int32_t max;

  /// @brief Field min, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) int32_t min;

  static inline ::UnityEngine::Rendering::LogarithmicAttribute* New_ctor(int32_t min, int32_t max);

  constexpr int32_t const& __cordl_internal_get_max() const;

  constexpr int32_t& __cordl_internal_get_max();

  constexpr int32_t const& __cordl_internal_get_min() const;

  constexpr int32_t& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_max(int32_t value);

  constexpr void __cordl_internal_set_min(int32_t value);

  /// @brief Method .ctor, addr 0x65dacb4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t min, int32_t max);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LogarithmicAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LogarithmicAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LogarithmicAttribute(LogarithmicAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LogarithmicAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LogarithmicAttribute(LogarithmicAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12107 };

  /// @brief Field min, offset: 0x18, size: 0x4, def value: None
  int32_t ___min;

  /// @brief Field max, offset: 0x1c, size: 0x4, def value: None
  int32_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LogarithmicAttribute, ___min) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LogarithmicAttribute, ___max) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LogarithmicAttribute, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::LogarithmicAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LogarithmicAttribute*, "UnityEngine.Rendering", "LogarithmicAttribute");
