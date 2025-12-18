#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ClampedIntParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__IntParameter_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClampedIntParameter)
// Forward declare root types
namespace UnityEngine::Rendering {
class ClampedIntParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ClampedIntParameter);
// Dependencies UnityEngine.Rendering.IntParameter
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ClampedIntParameter
class CORDL_TYPE ClampedIntParameter : public ::UnityEngine::Rendering::IntParameter {
public:
  // Declarations
  /// @brief Field max, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) int32_t max;

  /// @brief Field min, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) int32_t min;

  __declspec(property(get = get_value, put = set_value)) int32_t value;

  static inline ::UnityEngine::Rendering::ClampedIntParameter* New_ctor(int32_t value, int32_t min, int32_t max, bool overrideState);

  constexpr int32_t const& __cordl_internal_get_max() const;

  constexpr int32_t& __cordl_internal_get_max();

  constexpr int32_t const& __cordl_internal_get_min() const;

  constexpr int32_t& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_max(int32_t value);

  constexpr void __cordl_internal_set_min(int32_t value);

  /// @brief Method .ctor, addr 0x66159d4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t value, int32_t min, int32_t max, bool overrideState);

  /// @brief Method get_value, addr 0x66159b0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_value();

  /// @brief Method set_value, addr 0x66159b8, size 0x1c, virtual true, abstract: false, final false
  inline void set_value(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClampedIntParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClampedIntParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClampedIntParameter(ClampedIntParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClampedIntParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClampedIntParameter(ClampedIntParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12318 };

  /// @brief Field min, offset: 0x18, size: 0x4, def value: None
  int32_t ___min;

  /// @brief Field max, offset: 0x1c, size: 0x4, def value: None
  int32_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ClampedIntParameter, ___min) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ClampedIntParameter, ___max) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ClampedIntParameter, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ClampedIntParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ClampedIntParameter*, "UnityEngine.Rendering", "ClampedIntParameter");
