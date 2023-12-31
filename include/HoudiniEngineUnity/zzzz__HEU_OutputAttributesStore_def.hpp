#pragma once
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
// Type: HoudiniEngineUnity::HEU_OutputAttributesStore
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9668))
// CS Name: ::HoudiniEngineUnity::HEU_OutputAttributesStore*
class CORDL_TYPE HEU_OutputAttributesStore : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _attributes, offset 0x18, size 0x8
  __declspec(property(get = __get__attributes, put = __set__attributes))::HoudiniEngineUnity::HEU_OutputAttributeDictionary* _attributes;

  constexpr ::HoudiniEngineUnity::HEU_OutputAttributeDictionary*& __get__attributes();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_OutputAttributeDictionary*> const& __get__attributes() const;

  constexpr void __set__attributes(::HoudiniEngineUnity::HEU_OutputAttributeDictionary* value);

  /// @brief Method SetAttribute, addr 0x2183a28, size 0xfc, virtual false, abstract: false, final false
  inline void SetAttribute(::HoudiniEngineUnity::HEU_OutputAttribute* attribute);

  /// @brief Method GetAttribute, addr 0x2183b24, size 0x70, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_OutputAttribute* GetAttribute(::StringW name);

  /// @brief Method Clear, addr 0x2183b94, size 0x50, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::HoudiniEngineUnity::HEU_OutputAttributesStore* New_ctor();

  /// @brief Method .ctor, addr 0x2183be4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttributesStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_OutputAttributesStore(HEU_OutputAttributesStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttributesStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_OutputAttributesStore(HEU_OutputAttributesStore const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_OutputAttributesStore();

public:
  /// @brief Field _attributes, offset: 0x18, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_OutputAttributeDictionary* ____attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_OutputAttributesStore, 0x20>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_OutputAttributesStore, ____attributes) == 0x18, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_OutputAttributesStore);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_OutputAttributesStore*, "HoudiniEngineUnity", "HEU_OutputAttributesStore");
