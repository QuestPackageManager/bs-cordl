#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/FilmGrainLookupParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__FilmGrainLookup_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(FilmGrainLookupParameter)
namespace UnityEngine::Rendering::Universal {
struct FilmGrainLookup;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class FilmGrainLookupParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::FilmGrainLookupParameter);
// Dependencies UnityEngine.Rendering.Universal.FilmGrainLookup, UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.FilmGrainLookupParameter
class CORDL_TYPE FilmGrainLookupParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Rendering::Universal::FilmGrainLookup> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::FilmGrainLookupParameter* New_ctor(::UnityEngine::Rendering::Universal::FilmGrainLookup value, bool overrideState);

  /// @brief Method .ctor, addr 0x66c68d8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::FilmGrainLookup value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FilmGrainLookupParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FilmGrainLookupParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FilmGrainLookupParameter(FilmGrainLookupParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FilmGrainLookupParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FilmGrainLookupParameter(FilmGrainLookupParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12771 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::FilmGrainLookupParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::FilmGrainLookupParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::FilmGrainLookupParameter*, "UnityEngine.Rendering.Universal", "FilmGrainLookupParameter");
