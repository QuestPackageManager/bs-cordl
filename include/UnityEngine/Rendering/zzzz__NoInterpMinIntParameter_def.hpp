#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\NoInterpMinIntParameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoInterpMinIntParameter)
// Forward declare root types
namespace UnityEngine::Rendering {
class NoInterpMinIntParameter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::NoInterpMinIntParameter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::NoInterpMinIntParameter*, "UnityEngine.Rendering", "NoInterpMinIntParameter");
// Dependencies UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.NoInterpMinIntParameter
class CORDL_TYPE NoInterpMinIntParameter : public ::UnityEngine::Rendering::VolumeParameter_1<int32_t> {
public:
  // Declarations
  /// @brief Field min, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) int32_t min;

  __declspec(property(get = get_value, put = set_value)) int32_t value;

  static inline ::UnityEngine::Rendering::NoInterpMinIntParameter* New_ctor(int32_t value, int32_t min, bool overrideState);

  constexpr int32_t const& __cordl_internal_get_min() const;

  constexpr int32_t& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_min(int32_t value);

  /// @brief Method .ctor, addr 0x67cc9c8, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(int32_t value, int32_t min, bool overrideState);

  /// @brief Method get_value, addr 0x67cc9ac, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_value();

  /// @brief Method set_value, addr 0x67cc9b4, size 0x14, virtual true, abstract: false, final false
  inline void set_value(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoInterpMinIntParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoInterpMinIntParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoInterpMinIntParameter(NoInterpMinIntParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoInterpMinIntParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoInterpMinIntParameter(NoInterpMinIntParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12340 };

  /// @brief Field min, offset: 0x18, size: 0x4, def value: None
  int32_t ___min;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::NoInterpMinIntParameter, ___min) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::NoInterpMinIntParameter) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering
