#pragma once
// IWYU pragma private; include "System/Net/IPAddress.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPAddress)
namespace GlobalNamespace {
class IPAddress_ReadOnlyIPAddress;
}
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::Net {
class IPAddress;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::IPAddress);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.IPAddress
class CORDL_TYPE IPAddress : public ::System::Object {
public:
  // Declarations
  using ReadOnlyIPAddress = ::GlobalNamespace::IPAddress_ReadOnlyIPAddress;

  __declspec(property(get = get_AddressFamily)) ::System::Net::Sockets::AddressFamily AddressFamily;

  /// @brief Field Any, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Any, put = setStaticF_Any)) ::System::Net::IPAddress* Any;

  /// @brief Field Broadcast, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Broadcast, put = setStaticF_Broadcast)) ::System::Net::IPAddress* Broadcast;

  /// @brief Field IPv6Any, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IPv6Any, put = setStaticF_IPv6Any)) ::System::Net::IPAddress* IPv6Any;

  /// @brief Field IPv6Loopback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IPv6Loopback, put = setStaticF_IPv6Loopback)) ::System::Net::IPAddress* IPv6Loopback;

  /// @brief Field IPv6None, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IPv6None, put = setStaticF_IPv6None)) ::System::Net::IPAddress* IPv6None;

  __declspec(property(get = get_IsIPv4)) bool IsIPv4;

  __declspec(property(get = get_IsIPv6)) bool IsIPv6;

  __declspec(property(get = get_IsIPv6Multicast)) bool IsIPv6Multicast;

  /// @brief Field Loopback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Loopback, put = setStaticF_Loopback)) ::System::Net::IPAddress* Loopback;

  /// @brief Field None, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_None, put = setStaticF_None)) ::System::Net::IPAddress* None;

  __declspec(property(get = get_PrivateAddress, put = set_PrivateAddress)) uint32_t PrivateAddress;

  __declspec(property(get = get_PrivateScopeId, put = set_PrivateScopeId)) uint32_t PrivateScopeId;

  __declspec(property(get = get_ScopeId)) int64_t ScopeId;

  /// @brief Field _addressOrScopeId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__addressOrScopeId, put = __cordl_internal_set__addressOrScopeId)) uint32_t _addressOrScopeId;

  /// @brief Field _hashCode, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__hashCode, put = __cordl_internal_set__hashCode)) int32_t _hashCode;

  /// @brief Field _numbers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__numbers, put = __cordl_internal_set__numbers)) ::ArrayW<uint16_t, ::Array<uint16_t>*> _numbers;

  /// @brief Field _toString, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__toString, put = __cordl_internal_set__toString)) ::StringW _toString;

  /// @brief Method Equals, addr 0x449b5a8, size 0x8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* comparand);

  /// @brief Method Equals, addr 0x449b474, size 0x134, virtual false, abstract: false, final false
  inline bool Equals(::System::Object* comparandObj, bool compareScopeId);

  /// @brief Method GetAddressBytes, addr 0x449b0bc, size 0x148, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetAddressBytes();

  /// @brief Method GetHashCode, addr 0x449b5b0, size 0x3f0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsLoopback, addr 0x449b378, size 0xc8, virtual false, abstract: false, final false
  static inline bool IsLoopback(::System::Net::IPAddress* address);

  /// @brief Method MapToIPv6, addr 0x449b9a0, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Net::IPAddress* MapToIPv6();

  static inline ::System::Net::IPAddress* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> address);

  static inline ::System::Net::IPAddress* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> address, int64_t scopeid);

  static inline ::System::Net::IPAddress* New_ctor(::System::ReadOnlySpan_1<uint8_t> address);

  static inline ::System::Net::IPAddress* New_ctor(::System::ReadOnlySpan_1<uint8_t> address, int64_t scopeid);

  static inline ::System::Net::IPAddress* New_ctor(int64_t newAddress);

  static inline ::System::Net::IPAddress* New_ctor(::ArrayW<uint16_t, ::Array<uint16_t>*> numbers, uint32_t scopeid);

  static inline ::System::Net::IPAddress* New_ctor(::cordl_internals::Ptr<uint16_t> numbers, int32_t numbersLength, uint32_t scopeid);

  /// @brief Method Parse, addr 0x449ae40, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Net::IPAddress* Parse(::StringW ipString);

  /// @brief Method ThrowAddressNullException, addr 0x449a7a4, size 0x4c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ThrowAddressNullException();

  /// @brief Method ToString, addr 0x449b26c, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x449ac10, size 0x6c, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW ipString, ::ByRef<::System::Net::IPAddress*> address);

  /// @brief Method TryWriteBytes, addr 0x449aed8, size 0x10c, virtual false, abstract: false, final false
  inline bool TryWriteBytes(::System::Span_1<uint8_t> destination, ::ByRef<int32_t> bytesWritten);

  /// @brief Method WriteIPv4Bytes, addr 0x449b070, size 0x4c, virtual false, abstract: false, final false
  inline void WriteIPv4Bytes(::System::Span_1<uint8_t> destination);

  /// @brief Method WriteIPv6Bytes, addr 0x449afe4, size 0x8c, virtual false, abstract: false, final false
  inline void WriteIPv6Bytes(::System::Span_1<uint8_t> destination);

  constexpr uint32_t const& __cordl_internal_get__addressOrScopeId() const;

  constexpr uint32_t& __cordl_internal_get__addressOrScopeId();

  constexpr int32_t const& __cordl_internal_get__hashCode() const;

  constexpr int32_t& __cordl_internal_get__hashCode();

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*> const& __cordl_internal_get__numbers() const;

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*>& __cordl_internal_get__numbers();

  constexpr ::StringW const& __cordl_internal_get__toString() const;

  constexpr ::StringW& __cordl_internal_get__toString();

  constexpr void __cordl_internal_set__addressOrScopeId(uint32_t value);

  constexpr void __cordl_internal_set__hashCode(int32_t value);

  constexpr void __cordl_internal_set__numbers(::ArrayW<uint16_t, ::Array<uint16_t>*> value);

  constexpr void __cordl_internal_set__toString(::StringW value);

  /// @brief Method .ctor, addr 0x449aa58, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> address);

  /// @brief Method .ctor, addr 0x449a728, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> address, int64_t scopeid);

  /// @brief Method .ctor, addr 0x449aac4, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::System::ReadOnlySpan_1<uint8_t> address);

  /// @brief Method .ctor, addr 0x449a7f0, size 0x17c, virtual false, abstract: false, final false
  inline void _ctor(::System::ReadOnlySpan_1<uint8_t> address, int64_t scopeid);

  /// @brief Method .ctor, addr 0x449a6a8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(int64_t newAddress);

  /// @brief Method .ctor, addr 0x449aa24, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint16_t, ::Array<uint16_t>*> numbers, uint32_t scopeid);

  /// @brief Method .ctor, addr 0x449a96c, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<uint16_t> numbers, int32_t numbersLength, uint32_t scopeid);

  static inline ::System::Net::IPAddress* getStaticF_Any();

  static inline ::System::Net::IPAddress* getStaticF_Broadcast();

  static inline ::System::Net::IPAddress* getStaticF_IPv6Any();

  static inline ::System::Net::IPAddress* getStaticF_IPv6Loopback();

  static inline ::System::Net::IPAddress* getStaticF_IPv6None();

  static inline ::System::Net::IPAddress* getStaticF_Loopback();

  static inline ::System::Net::IPAddress* getStaticF_None();

  /// @brief Method get_AddressFamily, addr 0x449b204, size 0x18, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::AddressFamily get_AddressFamily();

  /// @brief Method get_IsIPv4, addr 0x449a658, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsIPv4();

  /// @brief Method get_IsIPv6, addr 0x449a668, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsIPv6();

  /// @brief Method get_IsIPv6Multicast, addr 0x449b440, size 0x34, virtual false, abstract: false, final false
  inline bool get_IsIPv6Multicast();

  /// @brief Method get_PrivateAddress, addr 0x449a678, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_PrivateAddress();

  /// @brief Method get_PrivateScopeId, addr 0x449a690, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_PrivateScopeId();

  /// @brief Method get_ScopeId, addr 0x449b21c, size 0x50, virtual false, abstract: false, final false
  inline int64_t get_ScopeId();

  static inline void setStaticF_Any(::System::Net::IPAddress* value);

  static inline void setStaticF_Broadcast(::System::Net::IPAddress* value);

  static inline void setStaticF_IPv6Any(::System::Net::IPAddress* value);

  static inline void setStaticF_IPv6Loopback(::System::Net::IPAddress* value);

  static inline void setStaticF_IPv6None(::System::Net::IPAddress* value);

  static inline void setStaticF_Loopback(::System::Net::IPAddress* value);

  static inline void setStaticF_None(::System::Net::IPAddress* value);

  /// @brief Method set_PrivateAddress, addr 0x449a680, size 0x10, virtual false, abstract: false, final false
  inline void set_PrivateAddress(uint32_t value);

  /// @brief Method set_PrivateScopeId, addr 0x449a698, size 0x10, virtual false, abstract: false, final false
  inline void set_PrivateScopeId(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IPAddress();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IPAddress", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPAddress(IPAddress&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPAddress", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPAddress(IPAddress const&) = delete;

  /// @brief Field LoopbackMask offset 0xffffffff size 0x8
  static constexpr int64_t LoopbackMask{ static_cast<int64_t>(0xff) };

  /// @brief Field NumberOfLabels offset 0xffffffff size 0x4
  static constexpr int32_t NumberOfLabels{ static_cast<int32_t>(0x8) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9551 };

  /// @brief Field _addressOrScopeId, offset: 0x10, size: 0x4, def value: None
  uint32_t ____addressOrScopeId;

  /// @brief Field _numbers, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint16_t, ::Array<uint16_t>*> ____numbers;

  /// @brief Field _toString, offset: 0x20, size: 0x8, def value: None
  ::StringW ____toString;

  /// @brief Field _hashCode, offset: 0x28, size: 0x4, def value: None
  int32_t ____hashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::IPAddress, ____addressOrScopeId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::IPAddress, ____numbers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::IPAddress, ____toString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::IPAddress, ____hashCode) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::IPAddress, 0x30>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::IPAddress);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IPAddress*, "System.Net", "IPAddress");
