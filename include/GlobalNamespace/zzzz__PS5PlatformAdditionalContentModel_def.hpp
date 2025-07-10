#pragma once
// IWYU pragma private; include "GlobalNamespace/PS5PlatformAdditionalContentModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_def.hpp"
CORDL_MODULE_EXPORT(PS5PlatformAdditionalContentModel)
namespace GlobalNamespace {
class ISonyCommerceHelper;
}
namespace GlobalNamespace {
class SonyLevelProductCollectionModel;
}
// Forward declare root types
namespace GlobalNamespace {
class PS5PlatformAdditionalContentModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5PlatformAdditionalContentModel);
// Dependencies SonyPlatformAdditionalContentModel
namespace GlobalNamespace {
// Is value type: false
// CS Name: PS5PlatformAdditionalContentModel
class CORDL_TYPE PS5PlatformAdditionalContentModel : public ::GlobalNamespace::SonyPlatformAdditionalContentModel {
public:
  // Declarations
  static inline ::GlobalNamespace::PS5PlatformAdditionalContentModel* New_ctor(::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper,
                                                                               ::GlobalNamespace::SonyLevelProductCollectionModel* sonyLevelProductCollectionModel);

  /// @brief Method .ctor, addr 0x26eb538, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ISonyCommerceHelper* sonyCommerceHelper, ::GlobalNamespace::SonyLevelProductCollectionModel* sonyLevelProductCollectionModel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5PlatformAdditionalContentModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PS5PlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS5PlatformAdditionalContentModel(PS5PlatformAdditionalContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS5PlatformAdditionalContentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS5PlatformAdditionalContentModel(PS5PlatformAdditionalContentModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13169 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5PlatformAdditionalContentModel, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5PlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5PlatformAdditionalContentModel*, "", "PS5PlatformAdditionalContentModel");
