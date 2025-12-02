#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/EnumParameter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(EnumParameter_1)
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> class EnumParameter_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::EnumParameter_1);
// Dependencies UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.EnumParameter`1<T>
class CORDL_TYPE EnumParameter_1 : public ::UnityEngine::Rendering::VolumeParameter_1<T> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::EnumParameter_1<T>* New_ctor(T value, bool overrideState);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumParameter_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumParameter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumParameter_1(EnumParameter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumParameter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumParameter_1(EnumParameter_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12303 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::EnumParameter_1, "UnityEngine.Rendering", "EnumParameter`1");
