#pragma once
// IWYU pragma private; include "Mono/Security/Protocol/Ntlm/MessageBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageBase)
namespace Mono::Security::Protocol::Ntlm {
struct NtlmFlags;
}
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
class MessageBase;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Protocol::Ntlm::MessageBase);
// Type: Mono.Security.Protocol.Ntlm::MessageBase
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// CS Name: ::Mono.Security.Protocol.Ntlm::MessageBase*
class CORDL_TYPE MessageBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Flags, put = set_Flags))::Mono::Security::Protocol::Ntlm::NtlmFlags Flags;

  __declspec(property(get = get_Type)) int32_t Type;

  /// @brief Field _flags, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__flags, put = __cordl_internal_set__flags))::Mono::Security::Protocol::Ntlm::NtlmFlags _flags;

  /// @brief Field _type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) int32_t _type;

  /// @brief Field header, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_header, put = setStaticF_header))::ArrayW<uint8_t, ::Array<uint8_t>*> header;

  /// @brief Method CheckHeader, addr 0x27ac484, size 0x114, virtual false, abstract: false, final false
  inline bool CheckHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method Decode, addr 0x27ac2e0, size 0x1a4, virtual true, abstract: false, final false
  inline void Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method GetBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes();

  static inline ::Mono::Security::Protocol::Ntlm::MessageBase* New_ctor(int32_t messageType);

  /// @brief Method PrepareMessage, addr 0x27ac1e0, size 0x100, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PrepareMessage(int32_t messageSize);

  constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags const& __cordl_internal_get__flags() const;

  constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags& __cordl_internal_get__flags();

  constexpr int32_t const& __cordl_internal_get__type() const;

  constexpr int32_t& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__flags(::Mono::Security::Protocol::Ntlm::NtlmFlags value);

  constexpr void __cordl_internal_set__type(int32_t value);

  /// @brief Method .ctor, addr 0x27ac1a0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t messageType);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_header();

  /// @brief Method get_Flags, addr 0x27ac1c8, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::Protocol::Ntlm::NtlmFlags get_Flags();

  /// @brief Method get_Type, addr 0x27ac1d8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Type();

  static inline void setStaticF_header(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_Flags, addr 0x27ac1d0, size 0x8, virtual false, abstract: false, final false
  inline void set_Flags(::Mono::Security::Protocol::Ntlm::NtlmFlags value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageBase(MessageBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageBase(MessageBase const&) = delete;

  /// @brief Field _type, offset: 0x10, size: 0x4, def value: None
  int32_t ____type;

  /// @brief Field _flags, offset: 0x14, size: 0x4, def value: None
  ::Mono::Security::Protocol::Ntlm::NtlmFlags ____flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Protocol::Ntlm::MessageBase, 0x18>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::MessageBase, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::MessageBase, ____flags) == 0x14, "Offset mismatch!");

} // namespace Mono::Security::Protocol::Ntlm
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::MessageBase);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::MessageBase*, "Mono.Security.Protocol.Ntlm", "MessageBase");
