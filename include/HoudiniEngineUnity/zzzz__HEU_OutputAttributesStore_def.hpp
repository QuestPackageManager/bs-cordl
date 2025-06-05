#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_OutputAttributesStore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_OutputAttributesStore)
namespace HoudiniEngineUnity {
class HEU_OutputAttributeDictionary;
}
namespace HoudiniEngineUnity {
class HEU_OutputAttribute;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_OutputAttributesStore;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_OutputAttributesStore);
// Dependencies UnityEngine.MonoBehaviour
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_OutputAttributesStore
class CORDL_TYPE HEU_OutputAttributesStore : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _attributes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__attributes, put = __cordl_internal_set__attributes)) ::HoudiniEngineUnity::HEU_OutputAttributeDictionary* _attributes;

  /// @brief Method Clear, addr 0x3a3a444, size 0x50, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method GetAttribute, addr 0x3a3a3d4, size 0x70, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_OutputAttribute* GetAttribute(::StringW name);

  static inline ::HoudiniEngineUnity::HEU_OutputAttributesStore* New_ctor();

  /// @brief Method SetAttribute, addr 0x3a3a2d8, size 0xfc, virtual false, abstract: false, final false
  inline void SetAttribute(::HoudiniEngineUnity::HEU_OutputAttribute* attribute);

  constexpr ::HoudiniEngineUnity::HEU_OutputAttributeDictionary* const& __cordl_internal_get__attributes() const;

  constexpr ::HoudiniEngineUnity::HEU_OutputAttributeDictionary*& __cordl_internal_get__attributes();

  constexpr void __cordl_internal_set__attributes(::HoudiniEngineUnity::HEU_OutputAttributeDictionary* value);

  /// @brief Method .ctor, addr 0x3a3a494, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_OutputAttributesStore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttributesStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_OutputAttributesStore(HEU_OutputAttributesStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttributesStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_OutputAttributesStore(HEU_OutputAttributesStore const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11655 };

  /// @brief Field _attributes, offset: 0x20, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_OutputAttributeDictionary* ____attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_OutputAttributesStore, ____attributes) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_OutputAttributesStore, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_OutputAttributesStore);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_OutputAttributesStore*, "HoudiniEngineUnity", "HEU_OutputAttributesStore");
