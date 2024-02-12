#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ILevelProductData)
// Forward declare root types
namespace GlobalNamespace {
class ILevelProductData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ILevelProductData);
// Type: ::ILevelProductData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10955))
// CS Name: ::ILevelProductData*
class CORDL_TYPE ILevelProductData {
public:
  // Declarations
  __declspec(property(get = get_levelId))::StringW levelId;

  /// @brief Method get_levelId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_levelId();

  // Ctor Parameters [CppParam { name: "", ty: "ILevelProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILevelProductData(ILevelProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILevelProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILevelProductData(ILevelProductData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILevelProductData*, "", "ILevelProductData");
