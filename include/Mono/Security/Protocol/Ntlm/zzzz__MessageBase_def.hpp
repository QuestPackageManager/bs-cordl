#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(14038))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14036))
// CS Name: ::Mono.Security.Protocol.Ntlm::MessageBase*
class CORDL_TYPE MessageBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field _type, offset 0x10, size 0x4
  __declspec(property(get = __get__type, put = __set__type)) int32_t _type;

  /// @brief Field _flags, offset 0x14, size 0x4
  __declspec(property(get = __get__flags, put = __set__flags))::Mono::Security::Protocol::Ntlm::NtlmFlags _flags;

  /// @brief Field header, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_header, put = setStaticF_header))::ArrayW<uint8_t, ::Array<uint8_t>*> header;

  __declspec(property(get = get_Flags, put = set_Flags))::Mono::Security::Protocol::Ntlm::NtlmFlags Flags;

  __declspec(property(get = get_Type)) int32_t Type;

  constexpr int32_t& __get__type();

  constexpr int32_t const& __get__type() const;

  constexpr void __set__type(int32_t value);

  constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags& __get__flags();

  constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags const& __get__flags() const;

  constexpr void __set__flags(::Mono::Security::Protocol::Ntlm::NtlmFlags value);

  static inline void setStaticF_header(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_header();

  static inline ::Mono::Security::Protocol::Ntlm::MessageBase* New_ctor(int32_t messageType);

  /// @brief Method .ctor addr 0x22a6bdc size 0x28 virtual false final false
  inline void _ctor(int32_t messageType);

  /// @brief Method get_Flags addr 0x22a6c04 size 0x8 virtual false final false
  inline ::Mono::Security::Protocol::Ntlm::NtlmFlags get_Flags();

  /// @brief Method set_Flags addr 0x22a6c0c size 0x8 virtual false final false
  inline void set_Flags(::Mono::Security::Protocol::Ntlm::NtlmFlags value);

  /// @brief Method get_Type addr 0x22a6c14 size 0x8 virtual false final false
  inline int32_t get_Type();

  /// @brief Method PrepareMessage addr 0x22a6c1c size 0x100 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PrepareMessage(int32_t messageSize);

  /// @brief Method Decode addr 0x22a6d1c size 0x1a4 virtual true final false
  inline void Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method CheckHeader addr 0x22a6ec0 size 0x114 virtual false final false
  inline bool CheckHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method GetBytes addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes();

  // Ctor Parameters [CppParam { name: "", ty: "MessageBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageBase(MessageBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageBase(MessageBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageBase();

public:
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
