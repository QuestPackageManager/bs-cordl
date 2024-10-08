#pragma once
// IWYU pragma private; include "Mono/Security/Protocol/Ntlm/ChallengeResponse2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChallengeResponse2)
namespace Mono::Security::Protocol::Ntlm {
struct NtlmAuthLevel;
}
namespace Mono::Security::Protocol::Ntlm {
class Type2Message;
}
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
class ChallengeResponse2;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Protocol::Ntlm::ChallengeResponse2);
// Type: Mono.Security.Protocol.Ntlm::ChallengeResponse2
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// CS Name: ::Mono.Security.Protocol.Ntlm::ChallengeResponse2*
class CORDL_TYPE ChallengeResponse2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field magic, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_magic, put = setStaticF_magic)) ::ArrayW<uint8_t, ::Array<uint8_t>*> magic;

  /// @brief Field nullEncMagic, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_nullEncMagic, put = setStaticF_nullEncMagic)) ::ArrayW<uint8_t, ::Array<uint8_t>*> nullEncMagic;

  /// @brief Method Compute, addr 0x3bce180, size 0x1f8, virtual false, abstract: false, final false
  static inline void Compute(::Mono::Security::Protocol::Ntlm::Type2Message* type2, ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel level, ::StringW username, ::StringW password, ::StringW domain,
                             ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> lm, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> ntlm);

  /// @brief Method Compute_LM, addr 0x3bcd198, size 0x32c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Compute_LM(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> challenge);

  /// @brief Method Compute_NTLM, addr 0x3bcda24, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Compute_NTLM(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> challenge);

  /// @brief Method Compute_NTLM_Password, addr 0x3bcd920, size 0x104, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Compute_NTLM_Password(::StringW password);

  /// @brief Method Compute_NTLMv2, addr 0x3bcdc5c, size 0x434, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Compute_NTLMv2(::Mono::Security::Protocol::Ntlm::Type2Message* type2, ::StringW username, ::StringW password, ::StringW domain);

  /// @brief Method Compute_NTLMv2_Session, addr 0x3bcda90, size 0x1cc, virtual false, abstract: false, final false
  static inline void Compute_NTLMv2_Session(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> challenge, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> lm,
                                            ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> ntlm);

  /// @brief Method GetResponse, addr 0x3bcd62c, size 0x2f4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetResponse(::ArrayW<uint8_t, ::Array<uint8_t>*> challenge, ::ArrayW<uint8_t, ::Array<uint8_t>*> pwd);

  /// @brief Method PasswordToKey, addr 0x3bcd4c4, size 0x168, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PasswordToKey(::StringW password, int32_t position);

  /// @brief Method PrepareDESKey, addr 0x3bce378, size 0x1f8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PrepareDESKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key56bits, int32_t position);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_magic();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_nullEncMagic();

  static inline void setStaticF_magic(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_nullEncMagic(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChallengeResponse2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChallengeResponse2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChallengeResponse2(ChallengeResponse2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChallengeResponse2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChallengeResponse2(ChallengeResponse2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15892 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Protocol::Ntlm::ChallengeResponse2, 0x10>, "Size mismatch!");

} // namespace Mono::Security::Protocol::Ntlm
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::ChallengeResponse2);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::ChallengeResponse2*, "Mono.Security.Protocol.Ntlm", "ChallengeResponse2");
