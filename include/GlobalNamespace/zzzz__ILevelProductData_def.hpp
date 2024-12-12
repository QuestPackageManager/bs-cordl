#pragma once
// IWYU pragma private; include "GlobalNamespace/ILevelProductData.hpp"
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
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ILevelProductData
class CORDL_TYPE ILevelProductData {
public:
  // Declarations
  __declspec(property(get = get_levelId)) ::StringW levelId;

  /// @brief Method get_levelId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_levelId();

  // Ctor Parameters [CppParam { name: "", ty: "ILevelProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILevelProductData(ILevelProductData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13128 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILevelProductData*, "", "ILevelProductData");
