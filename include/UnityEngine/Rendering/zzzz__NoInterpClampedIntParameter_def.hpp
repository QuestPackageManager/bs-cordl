#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/NoInterpClampedIntParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoInterpClampedIntParameter)
// Forward declare root types
namespace UnityEngine::Rendering {
class NoInterpClampedIntParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::NoInterpClampedIntParameter);
// Dependencies UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.NoInterpClampedIntParameter
class CORDL_TYPE NoInterpClampedIntParameter : public ::UnityEngine::Rendering::VolumeParameter_1<int32_t> {
public:
  // Declarations
  /// @brief Field max, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) int32_t max;

  /// @brief Field min, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) int32_t min;

  __declspec(property(get = get_value, put = set_value)) int32_t value;

  static inline ::UnityEngine::Rendering::NoInterpClampedIntParameter* New_ctor(int32_t value, int32_t min, int32_t max, bool overrideState);

  constexpr int32_t const& __cordl_internal_get_max() const;

  constexpr int32_t& __cordl_internal_get_max();

  constexpr int32_t const& __cordl_internal_get_min() const;

  constexpr int32_t& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_max(int32_t value);

  constexpr void __cordl_internal_set_min(int32_t value);

  /// @brief Method .ctor, addr 0x65ade98, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(int32_t value, int32_t min, int32_t max, bool overrideState);

  /// @brief Method get_value, addr 0x65ade74, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_value();

  /// @brief Method set_value, addr 0x65ade7c, size 0x1c, virtual true, abstract: false, final false
  inline void set_value(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoInterpClampedIntParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoInterpClampedIntParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoInterpClampedIntParameter(NoInterpClampedIntParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoInterpClampedIntParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoInterpClampedIntParameter(NoInterpClampedIntParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12315 };

  /// @brief Field min, offset: 0x18, size: 0x4, def value: None
  int32_t ___min;

  /// @brief Field max, offset: 0x1c, size: 0x4, def value: None
  int32_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::NoInterpClampedIntParameter, ___min) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::NoInterpClampedIntParameter, ___max) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::NoInterpClampedIntParameter, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::NoInterpClampedIntParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::NoInterpClampedIntParameter*, "UnityEngine.Rendering", "NoInterpClampedIntParameter");
