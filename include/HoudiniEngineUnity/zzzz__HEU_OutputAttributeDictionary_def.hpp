#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_OutputAttributeDictionary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_SerializableDictionary_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_OutputAttributeDictionary)
namespace HoudiniEngineUnity {
class HEU_OutputAttribute;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_OutputAttributeDictionary;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_OutputAttributeDictionary);
// Type: HoudiniEngineUnity::HEU_OutputAttributeDictionary
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_OutputAttributeDictionary*
class CORDL_TYPE HEU_OutputAttributeDictionary : public ::HoudiniEngineUnity::HEU_SerializableDictionary_2<::StringW, ::HoudiniEngineUnity::HEU_OutputAttribute*> {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::HEU_OutputAttributeDictionary* New_ctor();

  /// @brief Method .ctor, addr 0x39e3e60, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_OutputAttributeDictionary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttributeDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_OutputAttributeDictionary(HEU_OutputAttributeDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttributeDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_OutputAttributeDictionary(HEU_OutputAttributeDictionary const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11616 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_OutputAttributeDictionary, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_OutputAttributeDictionary);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_OutputAttributeDictionary*, "HoudiniEngineUnity", "HEU_OutputAttributeDictionary");
