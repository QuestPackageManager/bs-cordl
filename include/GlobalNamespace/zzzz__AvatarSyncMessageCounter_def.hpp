#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarSyncMessageCounter)
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarSyncMessageCounter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarSyncMessageCounter);
// Type: ::AvatarSyncMessageCounter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AvatarSyncMessageCounter*
class CORDL_TYPE AvatarSyncMessageCounter : public ::System::Object {
public:
  // Declarations
  /// @brief Field messageTimestamps, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_messageTimestamps, put = __cordl_internal_set_messageTimestamps))::System::Collections::Generic::Queue_1<::System::DateTime>* messageTimestamps;

  /// @brief Field period, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_period, put = __cordl_internal_set_period))::System::TimeSpan period;

  /// @brief Method CleanOldMessages, addr 0x278a0b0, size 0x138, virtual false, abstract: false, final false
  inline void CleanOldMessages();

  /// @brief Method CurrentMessages, addr 0x278a1e8, size 0x50, virtual false, abstract: false, final false
  inline int32_t CurrentMessages();

  /// @brief Method MessageReceived, addr 0x278a024, size 0x8c, virtual false, abstract: false, final false
  inline void MessageReceived();

  static inline ::GlobalNamespace::AvatarSyncMessageCounter* New_ctor(::System::TimeSpan period);

  constexpr ::System::Collections::Generic::Queue_1<::System::DateTime>*& __cordl_internal_get_messageTimestamps();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::System::DateTime>*> const& __cordl_internal_get_messageTimestamps() const;

  constexpr ::System::TimeSpan const& __cordl_internal_get_period() const;

  constexpr ::System::TimeSpan& __cordl_internal_get_period();

  constexpr void __cordl_internal_set_messageTimestamps(::System::Collections::Generic::Queue_1<::System::DateTime>* value);

  constexpr void __cordl_internal_set_period(::System::TimeSpan value);

  /// @brief Method .ctor, addr 0x2789f94, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::TimeSpan period);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarSyncMessageCounter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarSyncMessageCounter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarSyncMessageCounter(AvatarSyncMessageCounter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarSyncMessageCounter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarSyncMessageCounter(AvatarSyncMessageCounter const&) = delete;

  /// @brief Field messageTimestamps, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::System::DateTime>* ___messageTimestamps;

  /// @brief Field period, offset: 0x18, size: 0x8, def value: None
  ::System::TimeSpan ___period;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarSyncMessageCounter, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarSyncMessageCounter, ___messageTimestamps) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarSyncMessageCounter, ___period) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarSyncMessageCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarSyncMessageCounter*, "", "AvatarSyncMessageCounter");
