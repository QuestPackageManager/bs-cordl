#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPAddress)
namespace System {
class Object;
}
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System::Net {
class __IPAddress__ReadOnlyIPAddress;
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
// Type: System.Net::IPAddress
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9030))
// CS Name: ::System.Net::IPAddress*
class CORDL_TYPE IPAddress : public ::System::Object {
public:
  // Declarations
  using ReadOnlyIPAddress = ::System::Net::__IPAddress__ReadOnlyIPAddress;

  /// @brief Field _addressOrScopeId, offset 0x10, size 0x4
  __declspec(property(get = __get__addressOrScopeId, put = __set__addressOrScopeId)) uint32_t _addressOrScopeId;

  /// @brief Field _numbers, offset 0x18, size 0x8
  __declspec(property(get = __get__numbers, put = __set__numbers))::ArrayW<uint16_t, ::Array<uint16_t>*> _numbers;

  /// @brief Field _toString, offset 0x20, size 0x8
  __declspec(property(get = __get__toString, put = __set__toString))::StringW _toString;

  /// @brief Field _hashCode, offset 0x28, size 0x4
  __declspec(property(get = __get__hashCode, put = __set__hashCode)) int32_t _hashCode;

  /// @brief Field Any, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Any, put = setStaticF_Any))::System::Net::IPAddress* Any;

  /// @brief Field Loopback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Loopback, put = setStaticF_Loopback))::System::Net::IPAddress* Loopback;

  /// @brief Field Broadcast, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Broadcast, put = setStaticF_Broadcast))::System::Net::IPAddress* Broadcast;

  /// @brief Field None, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_None, put = setStaticF_None))::System::Net::IPAddress* None;

  /// @brief Field IPv6Any, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IPv6Any, put = setStaticF_IPv6Any))::System::Net::IPAddress* IPv6Any;

  /// @brief Field IPv6Loopback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IPv6Loopback, put = setStaticF_IPv6Loopback))::System::Net::IPAddress* IPv6Loopback;

  /// @brief Field IPv6None, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IPv6None, put = setStaticF_IPv6None))::System::Net::IPAddress* IPv6None;

  __declspec(property(get = get_IsIPv4)) bool IsIPv4;

  __declspec(property(get = get_IsIPv6)) bool IsIPv6;

  __declspec(property(get = get_PrivateAddress, put = set_PrivateAddress)) uint32_t PrivateAddress;

  __declspec(property(get = get_PrivateScopeId, put = set_PrivateScopeId)) uint32_t PrivateScopeId;

  __declspec(property(get = get_AddressFamily))::System::Net::Sockets::AddressFamily AddressFamily;

  __declspec(property(get = get_ScopeId)) int64_t ScopeId;

  __declspec(property(get = get_IsIPv6Multicast)) bool IsIPv6Multicast;

  constexpr uint32_t& __get__addressOrScopeId();

  constexpr uint32_t const& __get__addressOrScopeId() const;

  constexpr void __set__addressOrScopeId(uint32_t value);

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*>& __get__numbers();

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*> const& __get__numbers() const;

  constexpr void __set__numbers(::ArrayW<uint16_t, ::Array<uint16_t>*> value);

  constexpr ::StringW& __get__toString();

  constexpr ::StringW const& __get__toString() const;

  constexpr void __set__toString(::StringW value);

  constexpr int32_t& __get__hashCode();

  constexpr int32_t const& __get__hashCode() const;

  constexpr void __set__hashCode(int32_t value);

  static inline void setStaticF_Any(::System::Net::IPAddress* value);

  static inline ::System::Net::IPAddress* getStaticF_Any();

  static inline void setStaticF_Loopback(::System::Net::IPAddress* value);

  static inline ::System::Net::IPAddress* getStaticF_Loopback();

  static inline void setStaticF_Broadcast(::System::Net::IPAddress* value);

  static inline ::System::Net::IPAddress* getStaticF_Broadcast();

  static inline void setStaticF_None(::System::Net::IPAddress* value);

  static inline ::System::Net::IPAddress* getStaticF_None();

  static inline void setStaticF_IPv6Any(::System::Net::IPAddress* value);

  static inline ::System::Net::IPAddress* getStaticF_IPv6Any();

  static inline void setStaticF_IPv6Loopback(::System::Net::IPAddress* value);

  static inline ::System::Net::IPAddress* getStaticF_IPv6Loopback();

  static inline void setStaticF_IPv6None(::System::Net::IPAddress* value);

  static inline ::System::Net::IPAddress* getStaticF_IPv6None();

  /// @brief Method get_IsIPv4 addr 0x298a780 size 0x10 virtual false final false
  inline bool get_IsIPv4();

  /// @brief Method get_IsIPv6 addr 0x298a790 size 0x10 virtual false final false
  inline bool get_IsIPv6();

  /// @brief Method get_PrivateAddress addr 0x298a7a0 size 0x8 virtual false final false
  inline uint32_t get_PrivateAddress();

  /// @brief Method set_PrivateAddress addr 0x298a7a8 size 0x10 virtual false final false
  inline void set_PrivateAddress(uint32_t value);

  /// @brief Method get_PrivateScopeId addr 0x298a7b8 size 0x8 virtual false final false
  inline uint32_t get_PrivateScopeId();

  /// @brief Method set_PrivateScopeId addr 0x298a7c0 size 0x10 virtual false final false
  inline void set_PrivateScopeId(uint32_t value);

  static inline ::System::Net::IPAddress* New_ctor(int64_t newAddress);

  /// @brief Method .ctor addr 0x298a7d0 size 0x84 virtual false final false
  inline void _ctor(int64_t newAddress);

  static inline ::System::Net::IPAddress* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> address, int64_t scopeid);

  /// @brief Method .ctor addr 0x298a854 size 0x7c virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> address, int64_t scopeid);

  static inline ::System::Net::IPAddress* New_ctor(::System::ReadOnlySpan_1<uint8_t> address, int64_t scopeid);

  /// @brief Method .ctor addr 0x298a920 size 0x184 virtual false final false
  inline void _ctor(::System::ReadOnlySpan_1<uint8_t> address, int64_t scopeid);

  static inline ::System::Net::IPAddress* New_ctor(::cordl_internals::Ptr<uint16_t> numbers, int32_t numbersLength, uint32_t scopeid);

  /// @brief Method .ctor addr 0x298aaa4 size 0xb8 virtual false final false
  inline void _ctor(::cordl_internals::Ptr<uint16_t> numbers, int32_t numbersLength, uint32_t scopeid);

  static inline ::System::Net::IPAddress* New_ctor(::ArrayW<uint16_t, ::Array<uint16_t>*> numbers, uint32_t scopeid);

  /// @brief Method .ctor addr 0x298ab5c size 0x34 virtual false final false
  inline void _ctor(::ArrayW<uint16_t, ::Array<uint16_t>*> numbers, uint32_t scopeid);

  static inline ::System::Net::IPAddress* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> address);

  /// @brief Method .ctor addr 0x298ab90 size 0x6c virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> address);

  static inline ::System::Net::IPAddress* New_ctor(::System::ReadOnlySpan_1<uint8_t> address);

  /// @brief Method .ctor addr 0x298abfc size 0x150 virtual false final false
  inline void _ctor(::System::ReadOnlySpan_1<uint8_t> address);

  /// @brief Method TryParse addr 0x298ad4c size 0x6c virtual false final false
  static inline bool TryParse(::StringW ipString, ByRef<::System::Net::IPAddress*> address);

  /// @brief Method Parse addr 0x298afb4 size 0x9c virtual false final false
  static inline ::System::Net::IPAddress* Parse(::StringW ipString);

  /// @brief Method TryWriteBytes addr 0x298b050 size 0x118 virtual false final false
  inline bool TryWriteBytes(::System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten);

  /// @brief Method WriteIPv6Bytes addr 0x298b168 size 0x8c virtual false final false
  inline void WriteIPv6Bytes(::System::Span_1<uint8_t> destination);

  /// @brief Method WriteIPv4Bytes addr 0x298b1f4 size 0x4c virtual false final false
  inline void WriteIPv4Bytes(::System::Span_1<uint8_t> destination);

  /// @brief Method GetAddressBytes addr 0x298b240 size 0x154 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetAddressBytes();

  /// @brief Method get_AddressFamily addr 0x298b394 size 0x18 virtual false final false
  inline ::System::Net::Sockets::AddressFamily get_AddressFamily();

  /// @brief Method get_ScopeId addr 0x298b3ac size 0x58 virtual false final false
  inline int64_t get_ScopeId();

  /// @brief Method ToString addr 0x298b404 size 0x98 virtual true final false
  inline ::StringW ToString();

  /// @brief Method IsLoopback addr 0x298b510 size 0xc8 virtual false final false
  static inline bool IsLoopback(::System::Net::IPAddress* address);

  /// @brief Method get_IsIPv6Multicast addr 0x298b5d8 size 0x34 virtual false final false
  inline bool get_IsIPv6Multicast();

  /// @brief Method Equals addr 0x298b60c size 0x134 virtual false final false
  inline bool Equals(::System::Object* comparandObj, bool compareScopeId);

  /// @brief Method Equals addr 0x298b740 size 0x8 virtual true final false
  inline bool Equals(::System::Object* comparand);

  /// @brief Method GetHashCode addr 0x298b748 size 0x468 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method MapToIPv6 addr 0x298bbb0 size 0xe0 virtual false final false
  inline ::System::Net::IPAddress* MapToIPv6();

  /// @brief Method ThrowAddressNullException addr 0x298a8d0 size 0x50 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ThrowAddressNullException();

  // Ctor Parameters [CppParam { name: "", ty: "IPAddress", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPAddress(IPAddress&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPAddress", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPAddress(IPAddress const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IPAddress();

public:
  /// @brief Field _addressOrScopeId, offset: 0x10, size: 0x4, def value: None
  uint32_t ____addressOrScopeId;

  /// @brief Field _numbers, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint16_t, ::Array<uint16_t>*> ____numbers;

  /// @brief Field _toString, offset: 0x20, size: 0x8, def value: None
  ::StringW ____toString;

  /// @brief Field _hashCode, offset: 0x28, size: 0x4, def value: None
  int32_t ____hashCode;

  /// @brief Field LoopbackMask offset 0xffffffff size 0x8
  static constexpr int64_t LoopbackMask{ static_cast<int64_t>(0xff) };

  /// @brief Field NumberOfLabels offset 0xffffffff size 0x4
  static constexpr int32_t NumberOfLabels{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::IPAddress, 0x30>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::IPAddress);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IPAddress*, "System.Net", "IPAddress");
