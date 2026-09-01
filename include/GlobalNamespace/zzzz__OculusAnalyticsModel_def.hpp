#pragma once
// IWYU pragma private; include "GlobalNamespace\OculusAnalyticsModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OculusAnalyticsModel)
namespace GlobalNamespace {
struct BeatSaberSessionEventType;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusAnalyticsModel;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OculusAnalyticsModel*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusAnalyticsModel*, "", "OculusAnalyticsModel");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusAnalyticsModel
class CORDL_TYPE OculusAnalyticsModel : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_supportsOpenDataPrivacyPage)) bool supportsOpenDataPrivacyPage;

  /// @brief Convert operator to "::GlobalNamespace::IAnalyticsModel"
  constexpr operator ::GlobalNamespace::IAnalyticsModel*() noexcept;

  /// @brief Method LogClick, addr 0x32c39e0, size 0xb4, virtual true, abstract: false, final true
  inline void LogClick(::StringW clickType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* clickData);

  /// @brief Method LogEditAvatarEvent, addr 0x32c3894, size 0x14c, virtual true, abstract: false, final true
  inline void LogEditAvatarEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData);

  /// @brief Method LogEvent, addr 0x32c34f8, size 0x14c, virtual true, abstract: false, final true
  inline void LogEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData);

  /// @brief Method LogExposure, addr 0x32c3b48, size 0xb4, virtual true, abstract: false, final true
  inline void LogExposure(::StringW exposureType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* exposureData);

  /// @brief Method LogImpression, addr 0x32c3a94, size 0xb4, virtual true, abstract: false, final true
  inline void LogImpression(::StringW impressionType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* impressionData);

  /// @brief Method LogSessionEvent, addr 0x32c3644, size 0x250, virtual true, abstract: false, final true
  inline void LogSessionEvent(::GlobalNamespace::BeatSaberSessionEventType eventType, int32_t timeSinceSessionStart);

  static inline ::GlobalNamespace::OculusAnalyticsModel* New_ctor();

  /// @brief Method OpenDataPrivacyPage, addr 0x32c34f4, size 0x4, virtual true, abstract: false, final true
  inline void OpenDataPrivacyPage();

  /// @brief Method .ctor, addr 0x32c3bfc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_supportsOpenDataPrivacyPage, addr 0x32c34ec, size 0x8, virtual true, abstract: false, final true
  inline bool get_supportsOpenDataPrivacyPage();

  /// @brief Convert to "::GlobalNamespace::IAnalyticsModel"
  constexpr ::GlobalNamespace::IAnalyticsModel* i___GlobalNamespace__IAnalyticsModel() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusAnalyticsModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusAnalyticsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusAnalyticsModel(OculusAnalyticsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusAnalyticsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusAnalyticsModel(OculusAnalyticsModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23619 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OculusAnalyticsModel) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
