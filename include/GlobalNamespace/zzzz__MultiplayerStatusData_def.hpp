#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerStatusData)
namespace GlobalNamespace {
struct __MultiplayerStatusData__AvailabilityStatus;
}
namespace GlobalNamespace {
class __MultiplayerStatusData__UserMessage;
}
namespace GlobalNamespace {
class __MultiplayerStatusData__UserMessage__LocalizedMessage;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MultiplayerStatusData__AvailabilityStatus;
}
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace GlobalNamespace {
class __MultiplayerStatusData__UserMessage;
}
namespace GlobalNamespace {
class __MultiplayerStatusData__UserMessage__LocalizedMessage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerStatusData);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerStatusData__UserMessage);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage);
// Type: ::AvailabilityStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MultiplayerStatusData::AvailabilityStatus
struct CORDL_TYPE __MultiplayerStatusData__AvailabilityStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MultiplayerStatusData__AvailabilityStatus_Unwrapped
  enum struct ____MultiplayerStatusData__AvailabilityStatus_Unwrapped : int32_t {
    __E_Online = static_cast<int32_t>(0x0),
    __E_MaintenanceUpcoming = static_cast<int32_t>(0x1),
    __E_Offline = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MultiplayerStatusData__AvailabilityStatus_Unwrapped() const noexcept {
    return static_cast<____MultiplayerStatusData__AvailabilityStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerStatusData__AvailabilityStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerStatusData__AvailabilityStatus(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field MaintenanceUpcoming value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus const MaintenanceUpcoming;

  /// @brief Field Offline value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus const Offline;

  /// @brief Field Online value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus const Online;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LocalizedMessage
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerStatusData::UserMessage::LocalizedMessage*
class CORDL_TYPE __MultiplayerStatusData__UserMessage__LocalizedMessage : public ::System::Object {
public:
  // Declarations
  /// @brief Field language, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_language, put = __cordl_internal_set_language))::StringW language;

  /// @brief Field message, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_message, put = __cordl_internal_set_message))::StringW message;

  static inline ::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_language() const;

  constexpr ::StringW& __cordl_internal_get_language();

  constexpr ::StringW const& __cordl_internal_get_message() const;

  constexpr ::StringW& __cordl_internal_get_message();

  constexpr void __cordl_internal_set_language(::StringW value);

  constexpr void __cordl_internal_set_message(::StringW value);

  /// @brief Method .ctor, addr 0x12d6630, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerStatusData__UserMessage__LocalizedMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerStatusData__UserMessage__LocalizedMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerStatusData__UserMessage__LocalizedMessage(__MultiplayerStatusData__UserMessage__LocalizedMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerStatusData__UserMessage__LocalizedMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerStatusData__UserMessage__LocalizedMessage(__MultiplayerStatusData__UserMessage__LocalizedMessage const&) = delete;

  /// @brief Field language, offset: 0x10, size: 0x8, def value: None
  ::StringW ___language;

  /// @brief Field message, offset: 0x18, size: 0x8, def value: None
  ::StringW ___message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage, ___language) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage, ___message) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::UserMessage
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerStatusData::UserMessage*
class CORDL_TYPE __MultiplayerStatusData__UserMessage : public ::System::Object {
public:
  // Declarations
  using LocalizedMessage = ::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage;

  /// @brief Field localizations, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_localizations,
                      put = __cordl_internal_set_localizations))::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*,
                                                                         ::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*> localizations;

  static inline ::GlobalNamespace::__MultiplayerStatusData__UserMessage* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*, ::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*> const&
  __cordl_internal_get_localizations() const;

  constexpr ::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*, ::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*>&
  __cordl_internal_get_localizations();

  constexpr void __cordl_internal_set_localizations(
      ::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*, ::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*> value);

  /// @brief Method .ctor, addr 0x12d6628, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerStatusData__UserMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerStatusData__UserMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerStatusData__UserMessage(__MultiplayerStatusData__UserMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerStatusData__UserMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerStatusData__UserMessage(__MultiplayerStatusData__UserMessage const&) = delete;

  /// @brief Field localizations, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*, ::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*> ___localizations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerStatusData__UserMessage, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerStatusData__UserMessage, ___localizations) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerStatusData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 58, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerStatusData*
class CORDL_TYPE MultiplayerStatusData : public ::System::Object {
public:
  // Declarations
  using AvailabilityStatus = ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus;

  using UserMessage = ::GlobalNamespace::__MultiplayerStatusData__UserMessage;

  __declspec(property(get = get_maintenanceEndTime, put = set_maintenanceEndTime)) int64_t maintenanceEndTime;

  __declspec(property(get = get_maintenanceStartTime, put = set_maintenanceStartTime)) int64_t maintenanceStartTime;

  /// @brief Field maintenance_end_time, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_maintenance_end_time, put = __cordl_internal_set_maintenance_end_time)) int64_t maintenance_end_time;

  /// @brief Field maintenance_start_time, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_maintenance_start_time, put = __cordl_internal_set_maintenance_start_time)) int64_t maintenance_start_time;

  __declspec(property(get = get_minimumAppVersion, put = set_minimumAppVersion))::StringW minimumAppVersion;

  /// @brief Field minimum_app_version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_minimum_app_version, put = __cordl_internal_set_minimum_app_version))::StringW minimum_app_version;

  /// @brief Field status, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_status, put = __cordl_internal_set_status))::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus status;

  __declspec(property(get = get_useGamelift, put = set_useGamelift)) bool useGamelift;

  __declspec(property(get = get_useXPlatformAuth, put = set_useXPlatformAuth)) bool useXPlatformAuth;

  /// @brief Field use_gamelift, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_use_gamelift, put = __cordl_internal_set_use_gamelift)) bool use_gamelift;

  /// @brief Field use_xplatform_auth, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_use_xplatform_auth, put = __cordl_internal_set_use_xplatform_auth)) bool use_xplatform_auth;

  __declspec(property(get = get_userMessage, put = set_userMessage))::GlobalNamespace::__MultiplayerStatusData__UserMessage* userMessage;

  /// @brief Field user_message, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_user_message, put = __cordl_internal_set_user_message))::GlobalNamespace::__MultiplayerStatusData__UserMessage* user_message;

  static inline ::GlobalNamespace::MultiplayerStatusData* New_ctor();

  constexpr int64_t const& __cordl_internal_get_maintenance_end_time() const;

  constexpr int64_t& __cordl_internal_get_maintenance_end_time();

  constexpr int64_t const& __cordl_internal_get_maintenance_start_time() const;

  constexpr int64_t& __cordl_internal_get_maintenance_start_time();

  constexpr ::StringW const& __cordl_internal_get_minimum_app_version() const;

  constexpr ::StringW& __cordl_internal_get_minimum_app_version();

  constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus const& __cordl_internal_get_status() const;

  constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus& __cordl_internal_get_status();

  constexpr bool const& __cordl_internal_get_use_gamelift() const;

  constexpr bool& __cordl_internal_get_use_gamelift();

  constexpr bool const& __cordl_internal_get_use_xplatform_auth() const;

  constexpr bool& __cordl_internal_get_use_xplatform_auth();

  constexpr ::GlobalNamespace::__MultiplayerStatusData__UserMessage*& __cordl_internal_get_user_message();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerStatusData__UserMessage*> const& __cordl_internal_get_user_message() const;

  constexpr void __cordl_internal_set_maintenance_end_time(int64_t value);

  constexpr void __cordl_internal_set_maintenance_start_time(int64_t value);

  constexpr void __cordl_internal_set_minimum_app_version(::StringW value);

  constexpr void __cordl_internal_set_status(::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus value);

  constexpr void __cordl_internal_set_use_gamelift(bool value);

  constexpr void __cordl_internal_set_use_xplatform_auth(bool value);

  constexpr void __cordl_internal_set_user_message(::GlobalNamespace::__MultiplayerStatusData__UserMessage* value);

  /// @brief Method .ctor, addr 0x12d6620, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_maintenanceEndTime, addr 0x12d65d8, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_maintenanceEndTime();

  /// @brief Method get_maintenanceStartTime, addr 0x12d65c8, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_maintenanceStartTime();

  /// @brief Method get_minimumAppVersion, addr 0x12d65b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_minimumAppVersion();

  /// @brief Method get_useGamelift, addr 0x12d65f8, size 0x8, virtual false, abstract: false, final false
  inline bool get_useGamelift();

  /// @brief Method get_useXPlatformAuth, addr 0x12d660c, size 0x8, virtual false, abstract: false, final false
  inline bool get_useXPlatformAuth();

  /// @brief Method get_userMessage, addr 0x12d65e8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MultiplayerStatusData__UserMessage* get_userMessage();

  /// @brief Method set_maintenanceEndTime, addr 0x12d65e0, size 0x8, virtual false, abstract: false, final false
  inline void set_maintenanceEndTime(int64_t value);

  /// @brief Method set_maintenanceStartTime, addr 0x12d65d0, size 0x8, virtual false, abstract: false, final false
  inline void set_maintenanceStartTime(int64_t value);

  /// @brief Method set_minimumAppVersion, addr 0x12d65c0, size 0x8, virtual false, abstract: false, final false
  inline void set_minimumAppVersion(::StringW value);

  /// @brief Method set_useGamelift, addr 0x12d6600, size 0xc, virtual false, abstract: false, final false
  inline void set_useGamelift(bool value);

  /// @brief Method set_useXPlatformAuth, addr 0x12d6614, size 0xc, virtual false, abstract: false, final false
  inline void set_useXPlatformAuth(bool value);

  /// @brief Method set_userMessage, addr 0x12d65f0, size 0x8, virtual false, abstract: false, final false
  inline void set_userMessage(::GlobalNamespace::__MultiplayerStatusData__UserMessage* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerStatusData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerStatusData(MultiplayerStatusData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerStatusData(MultiplayerStatusData const&) = delete;

  /// @brief Field minimum_app_version, offset: 0x10, size: 0x8, def value: None
  ::StringW ___minimum_app_version;

  /// @brief Field status, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus ___status;

  /// @brief Field maintenance_start_time, offset: 0x20, size: 0x8, def value: None
  int64_t ___maintenance_start_time;

  /// @brief Field maintenance_end_time, offset: 0x28, size: 0x8, def value: None
  int64_t ___maintenance_end_time;

  /// @brief Field user_message, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerStatusData__UserMessage* ___user_message;

  /// @brief Field use_gamelift, offset: 0x38, size: 0x1, def value: None
  bool ___use_gamelift;

  /// @brief Field use_xplatform_auth, offset: 0x39, size: 0x1, def value: None
  bool ___use_xplatform_auth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerStatusData, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___minimum_app_version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___status) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___maintenance_start_time) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___maintenance_end_time) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___user_message) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___use_gamelift) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___use_xplatform_auth) == 0x39, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus, "", "MultiplayerStatusData/AvailabilityStatus");
NEED_NO_BOX(::GlobalNamespace::MultiplayerStatusData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerStatusData*, "", "MultiplayerStatusData");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerStatusData__UserMessage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerStatusData__UserMessage*, "", "MultiplayerStatusData/UserMessage");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*, "", "MultiplayerStatusData/UserMessage/LocalizedMessage");
