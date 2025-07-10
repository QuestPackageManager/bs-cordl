#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/NtpPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NtpPacket)
namespace LiteNetLib::Utils {
struct NtpLeapIndicator;
}
namespace LiteNetLib::Utils {
struct NtpMode;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class NtpPacket;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::NtpPacket);
// Dependencies System.DateTime, System.Nullable`1<T>, System.Object
namespace LiteNetLib::Utils {
// Is value type: false
// CS Name: LiteNetLib.Utils.NtpPacket
class CORDL_TYPE NtpPacket : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Bytes, put = set_Bytes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Bytes;

  __declspec(property(get = get_CorrectionOffset)) ::System::TimeSpan CorrectionOffset;

  __declspec(property(get = get_DestinationTimestamp, put = set_DestinationTimestamp)) ::System::Nullable_1<::System::DateTime> DestinationTimestamp;

  /// @brief Field Epoch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Epoch, put = setStaticF_Epoch)) ::System::DateTime Epoch;

  __declspec(property(get = get_LeapIndicator)) ::LiteNetLib::Utils::NtpLeapIndicator LeapIndicator;

  __declspec(property(get = get_Mode, put = set_Mode)) ::LiteNetLib::Utils::NtpMode Mode;

  __declspec(property(get = get_OriginTimestamp)) ::System::Nullable_1<::System::DateTime> OriginTimestamp;

  __declspec(property(get = get_Poll)) int32_t Poll;

  __declspec(property(get = get_Precision)) int32_t Precision;

  __declspec(property(get = get_ReceiveTimestamp)) ::System::Nullable_1<::System::DateTime> ReceiveTimestamp;

  __declspec(property(get = get_ReferenceId)) uint32_t ReferenceId;

  __declspec(property(get = get_ReferenceTimestamp)) ::System::Nullable_1<::System::DateTime> ReferenceTimestamp;

  __declspec(property(get = get_RootDelay)) ::System::TimeSpan RootDelay;

  __declspec(property(get = get_RootDispersion)) ::System::TimeSpan RootDispersion;

  __declspec(property(get = get_RoundTripTime)) ::System::TimeSpan RoundTripTime;

  __declspec(property(get = get_Stratum)) int32_t Stratum;

  __declspec(property(get = get_TransmitTimestamp, put = set_TransmitTimestamp)) ::System::Nullable_1<::System::DateTime> TransmitTimestamp;

  __declspec(property(get = get_VersionNumber, put = set_VersionNumber)) int32_t VersionNumber;

  /// @brief Field <Bytes>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Bytes_k__BackingField, put = __cordl_internal_set__Bytes_k__BackingField)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _Bytes_k__BackingField;

  /// @brief Field <DestinationTimestamp>k__BackingField, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__DestinationTimestamp_k__BackingField, put = __cordl_internal_set__DestinationTimestamp_k__BackingField)) ::System::Nullable_1<::System::DateTime>
      _DestinationTimestamp_k__BackingField;

  /// @brief Method CheckTimestamps, addr 0x3abf014, size 0x124, virtual false, abstract: false, final false
  inline void CheckTimestamps();

  /// @brief Method FromServerResponse, addr 0x3abf428, size 0xa4, virtual false, abstract: false, final false
  static inline ::LiteNetLib::Utils::NtpPacket* FromServerResponse(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::System::DateTime destinationTimestamp);

  /// @brief Method GetDateTime64, addr 0x3abebd0, size 0x140, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> GetDateTime64(int32_t offset);

  /// @brief Method GetInt32BE, addr 0x3abf800, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetInt32BE(int32_t offset);

  /// @brief Method GetTimeSpan32, addr 0x3abeabc, size 0x84, virtual false, abstract: false, final false
  inline ::System::TimeSpan GetTimeSpan32(int32_t offset);

  /// @brief Method GetUInt32BE, addr 0x3abeb50, size 0x78, virtual false, abstract: false, final false
  inline uint32_t GetUInt32BE(int32_t offset);

  /// @brief Method GetUInt64BE, addr 0x3abf70c, size 0x78, virtual false, abstract: false, final false
  inline uint64_t GetUInt64BE(int32_t offset);

  static inline ::LiteNetLib::Utils::NtpPacket* New_ctor();

  static inline ::LiteNetLib::Utils::NtpPacket* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method SetDateTime64, addr 0x3abed38, size 0x168, virtual false, abstract: false, final false
  inline void SetDateTime64(int32_t offset, ::System::Nullable_1<::System::DateTime> value);

  /// @brief Method SetUInt64BE, addr 0x3abf784, size 0x7c, virtual false, abstract: false, final false
  inline void SetUInt64BE(int32_t offset, uint64_t value);

  /// @brief Method SwapEndianness, addr 0x3abf858, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t SwapEndianness(uint32_t x);

  /// @brief Method SwapEndianness, addr 0x3abf804, size 0x54, virtual false, abstract: false, final false
  static inline uint64_t SwapEndianness(uint64_t x);

  /// @brief Method ValidateReply, addr 0x3abf5bc, size 0x150, virtual false, abstract: false, final false
  inline void ValidateReply();

  /// @brief Method ValidateRequest, addr 0x3abf4cc, size 0xf0, virtual false, abstract: false, final false
  inline void ValidateRequest();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__Bytes_k__BackingField() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__Bytes_k__BackingField();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__DestinationTimestamp_k__BackingField() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__DestinationTimestamp_k__BackingField();

  constexpr void __cordl_internal_set__Bytes_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__DestinationTimestamp_k__BackingField(::System::Nullable_1<::System::DateTime> value);

  /// @brief Method .ctor, addr 0x3abf2ac, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3abf390, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  static inline ::System::DateTime getStaticF_Epoch();

  /// @brief Method get_Bytes, addr 0x3abe934, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Bytes();

  /// @brief Method get_CorrectionOffset, addr 0x3abf138, size 0x174, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_CorrectionOffset();

  /// @brief Method get_DestinationTimestamp, addr 0x3abeea0, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> get_DestinationTimestamp();

  /// @brief Method get_LeapIndicator, addr 0x3abe944, size 0x2c, virtual false, abstract: false, final false
  inline ::LiteNetLib::Utils::NtpLeapIndicator get_LeapIndicator();

  /// @brief Method get_Mode, addr 0x3abe9d0, size 0x2c, virtual false, abstract: false, final false
  inline ::LiteNetLib::Utils::NtpMode get_Mode();

  /// @brief Method get_OriginTimestamp, addr 0x3abed10, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> get_OriginTimestamp();

  /// @brief Method get_Poll, addr 0x3abea5c, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_Poll();

  /// @brief Method get_Precision, addr 0x3abea88, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_Precision();

  /// @brief Method get_ReceiveTimestamp, addr 0x3abed18, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> get_ReceiveTimestamp();

  /// @brief Method get_ReferenceId, addr 0x3abeb48, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_ReferenceId();

  /// @brief Method get_ReferenceTimestamp, addr 0x3abebc8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> get_ReferenceTimestamp();

  /// @brief Method get_RootDelay, addr 0x3abeab4, size 0x8, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_RootDelay();

  /// @brief Method get_RootDispersion, addr 0x3abeb40, size 0x8, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_RootDispersion();

  /// @brief Method get_RoundTripTime, addr 0x3abeeb4, size 0x160, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_RoundTripTime();

  /// @brief Method get_Stratum, addr 0x3abea30, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_Stratum();

  /// @brief Method get_TransmitTimestamp, addr 0x3abed20, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> get_TransmitTimestamp();

  /// @brief Method get_VersionNumber, addr 0x3abe970, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_VersionNumber();

  static inline void setStaticF_Epoch(::System::DateTime value);

  /// @brief Method set_Bytes, addr 0x3abe93c, size 0x8, virtual false, abstract: false, final false
  inline void set_Bytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_DestinationTimestamp, addr 0x3abeeac, size 0x8, virtual false, abstract: false, final false
  inline void set_DestinationTimestamp(::System::Nullable_1<::System::DateTime> value);

  /// @brief Method set_Mode, addr 0x3abe9fc, size 0x34, virtual false, abstract: false, final false
  inline void set_Mode(::LiteNetLib::Utils::NtpMode value);

  /// @brief Method set_TransmitTimestamp, addr 0x3abed28, size 0x10, virtual false, abstract: false, final false
  inline void set_TransmitTimestamp(::System::Nullable_1<::System::DateTime> value);

  /// @brief Method set_VersionNumber, addr 0x3abe99c, size 0x34, virtual false, abstract: false, final false
  inline void set_VersionNumber(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NtpPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NtpPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NtpPacket(NtpPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NtpPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NtpPacket(NtpPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16623 };

  /// @brief Field <Bytes>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____Bytes_k__BackingField;

  /// @brief Field <DestinationTimestamp>k__BackingField, offset: 0x18, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____DestinationTimestamp_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::Utils::NtpPacket, ____Bytes_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NtpPacket, ____DestinationTimestamp_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::NtpPacket, 0x28>, "Size mismatch!");

} // namespace LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::NtpPacket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NtpPacket*, "LiteNetLib.Utils", "NtpPacket");
