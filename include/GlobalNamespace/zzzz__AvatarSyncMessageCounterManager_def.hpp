#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarSyncMessageCounterManager)
namespace GlobalNamespace {
class AvatarSyncMessageCounter;
}
namespace GlobalNamespace {
struct __AvatarSyncMessageCounterManager__MessageType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AvatarSyncMessageCounterManager__MessageType;
}
namespace GlobalNamespace {
class AvatarSyncMessageCounterManager;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType);
MARK_REF_PTR_T(::GlobalNamespace::AvatarSyncMessageCounterManager);
// Type: ::MessageType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AvatarSyncMessageCounterManager::MessageType
struct CORDL_TYPE __AvatarSyncMessageCounterManager__MessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AvatarSyncMessageCounterManager__MessageType_Unwrapped
  enum struct ____AvatarSyncMessageCounterManager__MessageType_Unwrapped : int32_t {
    __E_Sync = static_cast<int32_t>(0x0),
    __E_Delta = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AvatarSyncMessageCounterManager__MessageType_Unwrapped() const noexcept {
    return static_cast<____AvatarSyncMessageCounterManager__MessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AvatarSyncMessageCounterManager__MessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AvatarSyncMessageCounterManager__MessageType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Delta value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType const Delta;

  /// @brief Field Sync value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType const Sync;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AvatarSyncMessageCounterManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AvatarSyncMessageCounterManager*
class CORDL_TYPE AvatarSyncMessageCounterManager : public ::System::Object {
public:
  // Declarations
  using MessageType = ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::GlobalNamespace::AvatarSyncMessageCounterManager* _instance;

  /// @brief Field messageTypePeriods, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_messageTypePeriods,
                      put = __cordl_internal_set_messageTypePeriods))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,
                                                                                                                  ::System::TimeSpan>* messageTypePeriods;

  /// @brief Field userMessageCounters, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_userMessageCounters, put = __cordl_internal_set_userMessageCounters))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, ::GlobalNamespace::AvatarSyncMessageCounter*>*>* userMessageCounters;

  /// @brief Method GetMessageTypePeriod, addr 0x278a468, size 0x18c, virtual false, abstract: false, final false
  inline ::StringW GetMessageTypePeriod(::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType messageType);

  /// @brief Method GetPlayerMessageCount, addr 0x278a808, size 0x10c, virtual false, abstract: false, final false
  inline int32_t GetPlayerMessageCount(::StringW userId, ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType messageType);

  /// @brief Method MessageReceived, addr 0x278a5f4, size 0x214, virtual false, abstract: false, final false
  inline void MessageReceived(::StringW userId, ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType messageType);

  static inline ::GlobalNamespace::AvatarSyncMessageCounterManager* New_ctor();

  /// @brief Method SetMessageTypePeriod, addr 0x278a400, size 0x68, virtual false, abstract: false, final false
  inline void SetMessageTypePeriod(::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType messageType, ::System::TimeSpan period);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, ::System::TimeSpan>*& __cordl_internal_get_messageTypePeriods();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, ::System::TimeSpan>*> const&
  __cordl_internal_get_messageTypePeriods() const;

  constexpr ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, ::GlobalNamespace::AvatarSyncMessageCounter*>*>*&
  __cordl_internal_get_userMessageCounters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, ::GlobalNamespace::AvatarSyncMessageCounter*>*>*> const&
  __cordl_internal_get_userMessageCounters() const;

  constexpr void __cordl_internal_set_messageTypePeriods(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, ::System::TimeSpan>* value);

  constexpr void __cordl_internal_set_userMessageCounters(
      ::System::Collections::Generic::Dictionary_2<
          ::StringW, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, ::GlobalNamespace::AvatarSyncMessageCounter*>*>* value);

  /// @brief Method .ctor, addr 0x278a2b4, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::AvatarSyncMessageCounterManager* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x278a238, size 0x7c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::AvatarSyncMessageCounterManager* get_Instance();

  static inline void setStaticF__instance(::GlobalNamespace::AvatarSyncMessageCounterManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarSyncMessageCounterManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarSyncMessageCounterManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarSyncMessageCounterManager(AvatarSyncMessageCounterManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarSyncMessageCounterManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarSyncMessageCounterManager(AvatarSyncMessageCounterManager const&) = delete;

  /// @brief Field userMessageCounters, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,
                                                                                                       ::GlobalNamespace::AvatarSyncMessageCounter*>*>* ___userMessageCounters;

  /// @brief Field messageTypePeriods, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, ::System::TimeSpan>* ___messageTypePeriods;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarSyncMessageCounterManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarSyncMessageCounterManager, ___userMessageCounters) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarSyncMessageCounterManager, ___messageTypePeriods) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, "", "AvatarSyncMessageCounterManager/MessageType");
NEED_NO_BOX(::GlobalNamespace::AvatarSyncMessageCounterManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarSyncMessageCounterManager*, "", "AvatarSyncMessageCounterManager");
