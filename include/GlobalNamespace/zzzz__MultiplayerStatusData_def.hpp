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
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4480))
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4481))
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

  /// @brief Method .ctor addr 0x2204f68 size 0x8 virtual false final false
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4482))
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

  /// @brief Method .ctor addr 0x2204f60 size 0x8 virtual false final false
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4480)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4483))
// CS Name: ::MultiplayerStatusData*
class CORDL_TYPE MultiplayerStatusData : public ::System::Object {
public:
  // Declarations
  using UserMessage = ::GlobalNamespace::__MultiplayerStatusData__UserMessage;

  using AvailabilityStatus = ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus;

  /// @brief Field minimumAppVersion, offset 0x10, size 0x8
  __declspec(property(get = __get_minimumAppVersion, put = __set_minimumAppVersion))::StringW minimumAppVersion;

  /// @brief Field status, offset 0x18, size 0x4
  __declspec(property(get = __get_status, put = __set_status))::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus status;

  /// @brief Field maintenanceStartTime, offset 0x20, size 0x8
  __declspec(property(get = __get_maintenanceStartTime, put = __set_maintenanceStartTime)) int64_t maintenanceStartTime;

  /// @brief Field maintenanceEndTime, offset 0x28, size 0x8
  __declspec(property(get = __get_maintenanceEndTime, put = __set_maintenanceEndTime)) int64_t maintenanceEndTime;

  /// @brief Field userMessage, offset 0x30, size 0x8
  __declspec(property(get = __get_userMessage, put = __set_userMessage))::GlobalNamespace::__MultiplayerStatusData__UserMessage* userMessage;

  /// @brief Field useGamelift, offset 0x38, size 0x1
  __declspec(property(get = __get_useGamelift, put = __set_useGamelift)) bool useGamelift;

  /// @brief Field useXPlatformAuth, offset 0x39, size 0x1
  __declspec(property(get = __get_useXPlatformAuth, put = __set_useXPlatformAuth)) bool useXPlatformAuth;

  __declspec(property(get = get__minimumAppVersion, put = set__minimumAppVersion))::StringW _minimumAppVersion;

  __declspec(property(get = get__maintenanceStartTime, put = set__maintenanceStartTime)) int64_t _maintenanceStartTime;

  __declspec(property(get = get__userMessage, put = set__userMessage))::GlobalNamespace::__MultiplayerStatusData__UserMessage* _userMessage;

  __declspec(property(get = get__useGamelift, put = set__useGamelift)) bool _useGamelift;

  __declspec(property(get = get__useXPlatformAuth, put = set__useXPlatformAuth)) bool _useXPlatformAuth;

  constexpr ::StringW& __get_minimumAppVersion();

  constexpr ::StringW const& __get_minimumAppVersion() const;

  constexpr void __set_minimumAppVersion(::StringW value);

  constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus& __get_status();

  constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus const& __get_status() const;

  constexpr void __set_status(::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus value);

  constexpr int64_t& __get_maintenanceStartTime();

  constexpr int64_t const& __get_maintenanceStartTime() const;

  constexpr void __set_maintenanceStartTime(int64_t value);

  constexpr int64_t& __get_maintenanceEndTime();

  constexpr int64_t const& __get_maintenanceEndTime() const;

  constexpr void __set_maintenanceEndTime(int64_t value);

  constexpr ::GlobalNamespace::__MultiplayerStatusData__UserMessage*& __get_userMessage();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerStatusData__UserMessage*> const& __get_userMessage() const;

  constexpr void __set_userMessage(::GlobalNamespace::__MultiplayerStatusData__UserMessage* value);

  constexpr bool& __get_useGamelift();

  constexpr bool const& __get_useGamelift() const;

  constexpr void __set_useGamelift(bool value);

  constexpr bool& __get_useXPlatformAuth();

  constexpr bool const& __get_useXPlatformAuth() const;

  constexpr void __set_useXPlatformAuth(bool value);

  /// @brief Method get__minimumAppVersion addr 0x2204f00 size 0x8 virtual false final false
  inline ::StringW get__minimumAppVersion();

  /// @brief Method set__minimumAppVersion addr 0x2204f08 size 0x8 virtual false final false
  inline void set__minimumAppVersion(::StringW value);

  /// @brief Method get__maintenanceStartTime addr 0x2204f10 size 0x8 virtual false final false
  inline int64_t get__maintenanceStartTime();

  /// @brief Method set__maintenanceStartTime addr 0x2204f18 size 0x8 virtual false final false
  inline void set__maintenanceStartTime(int64_t value);

  /// @brief Method get__userMessage addr 0x2204f20 size 0x8 virtual false final false
  inline ::GlobalNamespace::__MultiplayerStatusData__UserMessage* get__userMessage();

  /// @brief Method set__userMessage addr 0x2204f28 size 0x8 virtual false final false
  inline void set__userMessage(::GlobalNamespace::__MultiplayerStatusData__UserMessage* value);

  /// @brief Method get__useGamelift addr 0x2204f30 size 0x8 virtual false final false
  inline bool get__useGamelift();

  /// @brief Method set__useGamelift addr 0x2204f38 size 0xc virtual false final false
  inline void set__useGamelift(bool value);

  /// @brief Method get__useXPlatformAuth addr 0x2204f44 size 0x8 virtual false final false
  inline bool get__useXPlatformAuth();

  /// @brief Method set__useXPlatformAuth addr 0x2204f4c size 0xc virtual false final false
  inline void set__useXPlatformAuth(bool value);

  static inline ::GlobalNamespace::MultiplayerStatusData* New_ctor();

  /// @brief Method .ctor addr 0x2204f58 size 0x8 virtual false final false
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
  /// @brief Field minimumAppVersion, offset: 0x10, size: 0x8, def value: None
  ::StringW ___minimumAppVersion;

  /// @brief Field status, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus ___status;

  /// @brief Field maintenanceStartTime, offset: 0x20, size: 0x8, def value: None
  int64_t ___maintenanceStartTime;

  /// @brief Field maintenanceEndTime, offset: 0x28, size: 0x8, def value: None
  int64_t ___maintenanceEndTime;

  /// @brief Field userMessage, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerStatusData__UserMessage* ___userMessage;

  /// @brief Field useGamelift, offset: 0x38, size: 0x1, def value: None
  bool ___useGamelift;

  /// @brief Field useXPlatformAuth, offset: 0x39, size: 0x1, def value: None
  bool ___useXPlatformAuth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerStatusData, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___minimumAppVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___status) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___maintenanceStartTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___maintenanceEndTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___userMessage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___useGamelift) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusData, ___useXPlatformAuth) == 0x39, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus, "", "MultiplayerStatusData/AvailabilityStatus");
NEED_NO_BOX(::GlobalNamespace::MultiplayerStatusData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerStatusData*, "", "MultiplayerStatusData");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerStatusData__UserMessage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerStatusData__UserMessage*, "", "MultiplayerStatusData/UserMessage");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*, "", "MultiplayerStatusData/UserMessage/LocalizedMessage");
