#pragma once
// IWYU pragma private; include "UnityEngine/HumanTrait.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HumanTrait)
// Forward declare root types
namespace UnityEngine {
class HumanTrait;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::HumanTrait);
// Type: UnityEngine::HumanTrait
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::HumanTrait*
class CORDL_TYPE HumanTrait : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetBoneIndexFromMono, addr 0x47edd34, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetBoneIndexFromMono(int32_t humanId);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HumanTrait();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HumanTrait", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HumanTrait(HumanTrait&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HumanTrait", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HumanTrait(HumanTrait const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16840 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HumanTrait, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::HumanTrait);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanTrait*, "UnityEngine", "HumanTrait");
