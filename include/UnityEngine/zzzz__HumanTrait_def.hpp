#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HumanTrait)
// Forward declare root types
namespace UnityEngine {
class HumanTrait;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::HumanTrait);
// Type: UnityEngine::HumanTrait
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14869))
// CS Name: ::UnityEngine::HumanTrait*
class CORDL_TYPE HumanTrait : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_MuscleCount, addr 0x2c906c8, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_MuscleCount();

  /// @brief Method GetBoneIndexFromMono, addr 0x2c8e894, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetBoneIndexFromMono(int32_t humanId);

  /// @brief Method get_MuscleName, addr 0x2c906f0, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> get_MuscleName();

  // Ctor Parameters [CppParam { name: "", ty: "HumanTrait", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HumanTrait(HumanTrait&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HumanTrait", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HumanTrait(HumanTrait const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HumanTrait();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HumanTrait, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::HumanTrait);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanTrait*, "UnityEngine", "HumanTrait");
