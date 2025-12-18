#pragma once
// IWYU pragma private; include "GlobalNamespace/IAnalyticsModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IAnalyticsModel)
namespace GlobalNamespace {
struct BeatSaberSessionEventType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class IAnalyticsModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IAnalyticsModel);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IAnalyticsModel
class CORDL_TYPE IAnalyticsModel {
public:
  // Declarations
  __declspec(property(get = get_supportsOpenDataPrivacyPage)) bool supportsOpenDataPrivacyPage;

  /// @brief Method LogClick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogClick(::StringW clickType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* clickData);

  /// @brief Method LogEditAvatarEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogEditAvatarEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData);

  /// @brief Method LogEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData);

  /// @brief Method LogExposure, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogExposure(::StringW exposureType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* exposureData);

  /// @brief Method LogImpression, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogImpression(::StringW impressionType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* impressionData);

  /// @brief Method LogSessionEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogSessionEvent(::GlobalNamespace::BeatSaberSessionEventType eventType, int32_t timeSinceSessionStart);

  /// @brief Method OpenDataPrivacyPage, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OpenDataPrivacyPage();

  /// @brief Method get_supportsOpenDataPrivacyPage, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_supportsOpenDataPrivacyPage();

  // Ctor Parameters [CppParam { name: "", ty: "IAnalyticsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAnalyticsModel(IAnalyticsModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23063 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IAnalyticsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAnalyticsModel*, "", "IAnalyticsModel");
