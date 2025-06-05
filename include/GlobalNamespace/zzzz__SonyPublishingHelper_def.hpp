#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyPublishingHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SonyPublishingHelper)
namespace GlobalNamespace {
class SonyPublisherSKUSettingsSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyPublishingHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyPublishingHelper);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyPublishingHelper
class CORDL_TYPE SonyPublishingHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetContentId, addr 0x26f0efc, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW GetContentId(::StringW serviceId, ::StringW productLabel);

  /// @brief Method GetContentId, addr 0x26f0ea8, size 0x20, virtual false, abstract: false, final false
  static inline ::StringW GetContentId(::GlobalNamespace::SonyPublisherSKUSettingsSO* sonyPublisherSKUSettings);

  /// @brief Method GetContentIdFromNpTitleId, addr 0x26f0f58, size 0x18, virtual false, abstract: false, final false
  static inline ::StringW GetContentIdFromNpTitleId(::StringW serviceIdPrefix, ::StringW npTitleId, ::StringW productLabel);

  /// @brief Method GetContentIdFromTitleId, addr 0x26f0ec8, size 0x34, virtual false, abstract: false, final false
  static inline ::StringW GetContentIdFromTitleId(::StringW serviceIdPrefix, ::StringW titleId, ::StringW productLabel);

  /// @brief Method GetNpTitleId, addr 0x26f0fcc, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetNpTitleId(::StringW titleId);

  /// @brief Method GetServiceId, addr 0x26f0e64, size 0x24, virtual false, abstract: false, final false
  static inline ::StringW GetServiceId(::GlobalNamespace::SonyPublisherSKUSettingsSO* sonyPublisherSKUSettings);

  /// @brief Method GetServiceIdFromNpTitleId, addr 0x26f0f70, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW GetServiceIdFromNpTitleId(::StringW serviceIdPrefix, ::StringW npTitleId);

  /// @brief Method GetServiceIdFromTitleId, addr 0x26f0e88, size 0x20, virtual false, abstract: false, final false
  static inline ::StringW GetServiceIdFromTitleId(::StringW serviceIdPrefix, ::StringW titleId);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyPublishingHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyPublishingHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyPublishingHelper(SonyPublishingHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyPublishingHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyPublishingHelper(SonyPublishingHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13212 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyPublishingHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyPublishingHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyPublishingHelper*, "", "SonyPublishingHelper");
