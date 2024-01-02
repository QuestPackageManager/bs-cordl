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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4469))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerStatusData__AvailabilityStatus(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerStatusData__AvailabilityStatus();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Online value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus const Online;

  /// @brief Field MaintenanceUpcoming value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus const MaintenanceUpcoming;

  /// @brief Field Offline value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus const Offline;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4470))
// CS Name: ::MultiplayerStatusData::UserMessage::LocalizedMessage*
class CORDL_TYPE __MultiplayerStatusData__UserMessage__LocalizedMessage : public ::System::Object {
public:
  // Declarations
  /// @brief Field language, offset 0x10, size 0x8
  __declspec(property(get = __get_language, put = __set_language))::StringW language;

  /// @brief Field message, offset 0x18, size 0x8
  __declspec(property(get = __get_message, put = __set_message))::StringW message;

  constexpr ::StringW& __get_language();

  constexpr ::StringW const& __get_language() const;

  constexpr void __set_language(::StringW value);

  constexpr ::StringW& __get_message();

  constexpr ::StringW const& __get_message() const;

  constexpr void __set_message(::StringW value);

  static inline ::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage* New_ctor();

  /// @brief Method .ctor, addr 0x2352fa4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerStatusData__UserMessage__LocalizedMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerStatusData__UserMessage__LocalizedMessage(__MultiplayerStatusData__UserMessage__LocalizedMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerStatusData__UserMessage__LocalizedMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerStatusData__UserMessage__LocalizedMessage(__MultiplayerStatusData__UserMessage__LocalizedMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerStatusData__UserMessage__LocalizedMessage();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4471))
// CS Name: ::MultiplayerStatusData::UserMessage*
class CORDL_TYPE __MultiplayerStatusData__UserMessage : public ::System::Object {
public:
  // Declarations
  using LocalizedMessage = ::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage;

  /// @brief Field localizations, offset 0x10, size 0x8
  __declspec(property(get = __get_localizations, put = __set_localizations))::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*,
                                                                                     ::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*> localizations;

  constexpr ::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*, ::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*>&
  __get_localizations();

  constexpr ::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*, ::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*> const&
  __get_localizations() const;

  constexpr void
  __set_localizations(::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*, ::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*> value);

  static inline ::GlobalNamespace::__MultiplayerStatusData__UserMessage* New_ctor();

  /// @brief Method .ctor, addr 0x2352f9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerStatusData__UserMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerStatusData__UserMessage(__MultiplayerStatusData__UserMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerStatusData__UserMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerStatusData__UserMessage(__MultiplayerStatusData__UserMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerStatusData__UserMessage();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4469)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4472))
// CS Name: ::MultiplayerStatusData*
class CORDL_TYPE MultiplayerStatusData : public ::System::Object {
public:
  // Declarations
  using UserMessage = ::GlobalNamespace::__MultiplayerStatusData__UserMessage;

  using AvailabilityStatus = ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus;

  /// @brief Field minimum_app_version, offset 0x10, size 0x8
  __declspec(property(get = __get_minimum_app_version, put = __set_minimum_app_version))::StringW minimum_app_version;

  /// @brief Field status, offset 0x18, size 0x4
  __declspec(property(get = __get_status, put = __set_status))::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus status;

  /// @brief Field maintenance_start_time, offset 0x20, size 0x8
  __declspec(property(get = __get_maintenance_start_time, put = __set_maintenance_start_time)) int64_t maintenance_start_time;

  /// @brief Field maintenance_end_time, offset 0x28, size 0x8
  __declspec(property(get = __get_maintenance_end_time, put = __set_maintenance_end_time)) int64_t maintenance_end_time;

  /// @brief Field user_message, offset 0x30, size 0x8
  __declspec(property(get = __get_user_message, put = __set_user_message))::GlobalNamespace::__MultiplayerStatusData__UserMessage* user_message;

  /// @brief Field use_gamelift, offset 0x38, size 0x1
  __declspec(property(get = __get_use_gamelift, put = __set_use_gamelift)) bool use_gamelift;

  /// @brief Field use_xplatform_auth, offset 0x39, size 0x1
  __declspec(property(get = __get_use_xplatform_auth, put = __set_use_xplatform_auth)) bool use_xplatform_auth;

  __declspec(property(get = get_minimumAppVersion, put = set_minimumAppVersion))::StringW minimumAppVersion;

  __declspec(property(get = get_maintenanceStartTime, put = set_maintenanceStartTime)) int64_t maintenanceStartTime;

  __declspec(property(get = get_maintenanceEndTime, put = set_maintenanceEndTime)) int64_t maintenanceEndTime;

  __declspec(property(get = get_userMessage, put = set_userMessage))::GlobalNamespace::__MultiplayerStatusData__UserMessage* userMessage;

  __declspec(property(get = get_useGamelift, put = set_useGamelift)) bool useGamelift;

  __declspec(property(get = get_useXPlatformAuth, put = set_useXPlatformAuth)) bool useXPlatformAuth;

  constexpr ::StringW& __get_minimum_app_version();

  constexpr ::StringW const& __get_minimum_app_version() const;

  constexpr void __set_minimum_app_version(::StringW value);

  constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus& __get_status();

  constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus const& __get_status() const;

  constexpr void __set_status(::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus value);

  constexpr int64_t& __get_maintenance_start_time();

  constexpr int64_t const& __get_maintenance_start_time() const;

  constexpr void __set_maintenance_start_time(int64_t value);

  constexpr int64_t& __get_maintenance_end_time();

  constexpr int64_t const& __get_maintenance_end_time() const;

  constexpr void __set_maintenance_end_time(int64_t value);

  constexpr ::GlobalNamespace::__MultiplayerStatusData__UserMessage*& __get_user_message();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerStatusData__UserMessage*> const& __get_user_message() const;

  constexpr void __set_user_message(::GlobalNamespace::__MultiplayerStatusData__UserMessage* value);

  constexpr bool& __get_use_gamelift();

  constexpr bool const& __get_use_gamelift() const;

  constexpr void __set_use_gamelift(bool value);

  constexpr bool& __get_use_xplatform_auth();

  constexpr bool const& __get_use_xplatform_auth() const;

  constexpr void __set_use_xplatform_auth(bool value);

  /// @brief Method get_minimumAppVersion, addr 0x2352f2c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_minimumAppVersion();

  /// @brief Method set_minimumAppVersion, addr 0x2352f34, size 0x8, virtual false, abstract: false, final false
  inline void set_minimumAppVersion(::StringW value);

  /// @brief Method get_maintenanceStartTime, addr 0x2352f3c, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_maintenanceStartTime();

  /// @brief Method set_maintenanceStartTime, addr 0x2352f44, size 0x8, virtual false, abstract: false, final false
  inline void set_maintenanceStartTime(int64_t value);

  /// @brief Method get_maintenanceEndTime, addr 0x2352f4c, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_maintenanceEndTime();

  /// @brief Method set_maintenanceEndTime, addr 0x2352f54, size 0x8, virtual false, abstract: false, final false
  inline void set_maintenanceEndTime(int64_t value);

  /// @brief Method get_userMessage, addr 0x2352f5c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MultiplayerStatusData__UserMessage* get_userMessage();

  /// @brief Method set_userMessage, addr 0x2352f64, size 0x8, virtual false, abstract: false, final false
  inline void set_userMessage(::GlobalNamespace::__MultiplayerStatusData__UserMessage* value);

  /// @brief Method get_useGamelift, addr 0x2352f6c, size 0x8, virtual false, abstract: false, final false
  inline bool get_useGamelift();

  /// @brief Method set_useGamelift, addr 0x2352f74, size 0xc, virtual false, abstract: false, final false
  inline void set_useGamelift(bool value);

  /// @brief Method get_useXPlatformAuth, addr 0x2352f80, size 0x8, virtual false, abstract: false, final false
  inline bool get_useXPlatformAuth();

  /// @brief Method set_useXPlatformAuth, addr 0x2352f88, size 0xc, virtual false, abstract: false, final false
  inline void set_useXPlatformAuth(bool value);

  static inline ::GlobalNamespace::MultiplayerStatusData* New_ctor();

  /// @brief Method .ctor, addr 0x2352f94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerStatusData(MultiplayerStatusData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerStatusData(MultiplayerStatusData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerStatusData();

public:
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
