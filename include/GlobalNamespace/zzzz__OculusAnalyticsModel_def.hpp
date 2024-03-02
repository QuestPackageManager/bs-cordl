#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OculusAnalyticsModel)
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
MARK_REF_PTR_T(::GlobalNamespace::OculusAnalyticsModel);
// Type: ::OculusAnalyticsModel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusAnalyticsModel*
class CORDL_TYPE OculusAnalyticsModel : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_supportsOpenDataPrivacyPage)) bool supportsOpenDataPrivacyPage;

  /// @brief Convert operator to "::GlobalNamespace::IAnalyticsModel"
  constexpr operator ::GlobalNamespace::IAnalyticsModel*() noexcept;

  /// @brief Method LogClick, addr 0xe7c7e0, size 0x90, virtual true, abstract: false, final true
  inline void LogClick(::StringW clickType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* clickData);

  /// @brief Method LogEditAvatarEvent, addr 0xe7c6e8, size 0xf8, virtual true, abstract: false, final true
  inline void LogEditAvatarEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData);

  /// @brief Method LogEvent, addr 0xe7c5f0, size 0xf8, virtual true, abstract: false, final true
  inline void LogEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData);

  /// @brief Method LogExposure, addr 0xe7c900, size 0x90, virtual true, abstract: false, final true
  inline void LogExposure(::StringW exposureType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* exposureData);

  /// @brief Method LogImpression, addr 0xe7c870, size 0x90, virtual true, abstract: false, final true
  inline void LogImpression(::StringW impressionType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* impressionData);

  static inline ::GlobalNamespace::OculusAnalyticsModel* New_ctor();

  /// @brief Method OpenDataPrivacyPage, addr 0xe7c5ec, size 0x4, virtual true, abstract: false, final true
  inline void OpenDataPrivacyPage();

  /// @brief Method .ctor, addr 0xe7c990, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_supportsOpenDataPrivacyPage, addr 0xe7c5e4, size 0x8, virtual true, abstract: false, final true
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusAnalyticsModel, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusAnalyticsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusAnalyticsModel*, "", "OculusAnalyticsModel");
