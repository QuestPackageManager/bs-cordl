#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MinIntParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__IntParameter_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MinIntParameter)
// Forward declare root types
namespace UnityEngine::Rendering {
class MinIntParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::MinIntParameter);
// Dependencies UnityEngine.Rendering.IntParameter
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.MinIntParameter
class CORDL_TYPE MinIntParameter : public ::UnityEngine::Rendering::IntParameter {
public:
  // Declarations
  /// @brief Field min, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) int32_t min;

  __declspec(property(get = get_value, put = set_value)) int32_t value;

  static inline ::UnityEngine::Rendering::MinIntParameter* New_ctor(int32_t value, int32_t min, bool overrideState);

  constexpr int32_t const& __cordl_internal_get_min() const;

  constexpr int32_t& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_min(int32_t value);

  /// @brief Method .ctor, addr 0x65adc90, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t value, int32_t min, bool overrideState);

  /// @brief Method get_value, addr 0x65adc74, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_value();

  /// @brief Method set_value, addr 0x65adc7c, size 0x14, virtual true, abstract: false, final false
  inline void set_value(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MinIntParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MinIntParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MinIntParameter(MinIntParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MinIntParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MinIntParameter(MinIntParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12310 };

  /// @brief Field min, offset: 0x18, size: 0x4, def value: None
  int32_t ___min;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::MinIntParameter, ___min) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::MinIntParameter, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::MinIntParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::MinIntParameter*, "UnityEngine.Rendering", "MinIntParameter");
