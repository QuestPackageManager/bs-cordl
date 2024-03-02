#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ProGridsNoSnapAttribute)
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ProGridsNoSnapAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ProGridsNoSnapAttribute);
// Type: UnityEngine.ProBuilder::ProGridsNoSnapAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::ProGridsNoSnapAttribute*
class CORDL_TYPE ProGridsNoSnapAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::ProBuilder::ProGridsNoSnapAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2c469d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProGridsNoSnapAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProGridsNoSnapAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProGridsNoSnapAttribute(ProGridsNoSnapAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProGridsNoSnapAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProGridsNoSnapAttribute(ProGridsNoSnapAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ProGridsNoSnapAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::ProGridsNoSnapAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ProGridsNoSnapAttribute*, "UnityEngine.ProBuilder", "ProGridsNoSnapAttribute");
