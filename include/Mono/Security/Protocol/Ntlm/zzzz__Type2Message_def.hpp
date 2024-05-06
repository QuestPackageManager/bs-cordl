#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Type2Message)
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
class Type2Message;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Protocol::Ntlm::Type2Message);
// Type: Mono.Security.Protocol.Ntlm::Type2Message
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// CS Name: ::Mono.Security.Protocol.Ntlm::Type2Message*
class CORDL_TYPE Type2Message : public ::Mono::Security::Protocol::Ntlm::MessageBase {
public:
  // Declarations
  __declspec(property(get = get_Nonce))::ArrayW<uint8_t, ::Array<uint8_t>*> Nonce;

  __declspec(property(get = get_TargetInfo))::ArrayW<uint8_t, ::Array<uint8_t>*> TargetInfo;

  __declspec(property(get = get_TargetName))::StringW TargetName;

  /// @brief Field _nonce, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__nonce, put = __cordl_internal_set__nonce))::ArrayW<uint8_t, ::Array<uint8_t>*> _nonce;

  /// @brief Field _targetInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__targetInfo, put = __cordl_internal_set__targetInfo))::ArrayW<uint8_t, ::Array<uint8_t>*> _targetInfo;

  /// @brief Field _targetName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__targetName, put = __cordl_internal_set__targetName))::StringW _targetName;

  /// @brief Method Decode, addr 0x277fc64, size 0x180, virtual true, abstract: false, final false
  inline void Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method Finalize, addr 0x277fbb4, size 0xa8, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetBytes, addr 0x277fde4, size 0xb8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes();

  static inline ::Mono::Security::Protocol::Ntlm::Type2Message* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__nonce() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__nonce();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__targetInfo() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__targetInfo();

  constexpr ::StringW const& __cordl_internal_get__targetName() const;

  constexpr ::StringW& __cordl_internal_get__targetName();

  constexpr void __cordl_internal_set__nonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__targetInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__targetName(::StringW value);

  /// @brief Method .ctor, addr 0x277fb10, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method get_Nonce, addr 0x277ebf8, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Nonce();

  /// @brief Method get_TargetInfo, addr 0x277eb80, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_TargetInfo();

  /// @brief Method get_TargetName, addr 0x277fc5c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TargetName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Type2Message();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Type2Message", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Type2Message(Type2Message&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Type2Message", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Type2Message(Type2Message const&) = delete;

  /// @brief Field _nonce, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____nonce;

  /// @brief Field _targetName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____targetName;

  /// @brief Field _targetInfo, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____targetInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Protocol::Ntlm::Type2Message, 0x30>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type2Message, ____nonce) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type2Message, ____targetName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type2Message, ____targetInfo) == 0x28, "Offset mismatch!");

} // namespace Mono::Security::Protocol::Ntlm
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::Type2Message);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::Type2Message*, "Mono.Security.Protocol.Ntlm", "Type2Message");
