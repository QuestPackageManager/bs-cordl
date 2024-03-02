#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChallengeResponse)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
class ChallengeResponse;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Protocol::Ntlm::ChallengeResponse);
// Type: Mono.Security.Protocol.Ntlm::ChallengeResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// CS Name: ::Mono.Security.Protocol.Ntlm::ChallengeResponse*
class CORDL_TYPE ChallengeResponse : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_Challenge))::ArrayW<uint8_t, ::Array<uint8_t>*> Challenge;

  __declspec(property(get = get_LM))::ArrayW<uint8_t, ::Array<uint8_t>*> LM;

  __declspec(property(get = get_NT))::ArrayW<uint8_t, ::Array<uint8_t>*> NT;

  __declspec(property(put = set_Password))::StringW Password;

  /// @brief Field _challenge, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__challenge, put = __cordl_internal_set__challenge))::ArrayW<uint8_t, ::Array<uint8_t>*> _challenge;

  /// @brief Field _disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Field _lmpwd, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lmpwd, put = __cordl_internal_set__lmpwd))::ArrayW<uint8_t, ::Array<uint8_t>*> _lmpwd;

  /// @brief Field _ntpwd, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ntpwd, put = __cordl_internal_set__ntpwd))::ArrayW<uint8_t, ::Array<uint8_t>*> _ntpwd;

  /// @brief Field magic, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_magic, put = setStaticF_magic))::ArrayW<uint8_t, ::Array<uint8_t>*> magic;

  /// @brief Field nullEncMagic, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_nullEncMagic, put = setStaticF_nullEncMagic))::ArrayW<uint8_t, ::Array<uint8_t>*> nullEncMagic;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x24edd28, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x24ee274, size 0x6c, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x24edc88, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetResponse, addr 0x24edf34, size 0x2dc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetResponse(::ArrayW<uint8_t, ::Array<uint8_t>*> pwd);

  static inline ::Mono::Security::Protocol::Ntlm::ChallengeResponse* New_ctor();

  static inline ::Mono::Security::Protocol::Ntlm::ChallengeResponse* New_ctor(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> challenge);

  /// @brief Method PasswordToKey, addr 0x24edd8c, size 0x144, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PasswordToKey(::StringW password, int32_t position);

  /// @brief Method PrepareDESKey, addr 0x24ee2e0, size 0x1f8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PrepareDESKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key56bits, int32_t position);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__challenge() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__challenge();

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__lmpwd() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__lmpwd();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__ntpwd() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__ntpwd();

  constexpr void __cordl_internal_set__challenge(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__disposed(bool value);

  constexpr void __cordl_internal_set__lmpwd(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__ntpwd(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x24ed6a0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x24ed710, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> challenge);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_magic();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_nullEncMagic();

  /// @brief Method get_LM, addr 0x24eded0, size 0x64, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_LM();

  /// @brief Method get_NT, addr 0x24ee210, size 0x64, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_NT();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_magic(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_nullEncMagic(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_Challenge, addr 0x24edb54, size 0x134, virtual false, abstract: false, final false
  inline void set_Challenge(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_Password, addr 0x24ed748, size 0x40c, virtual false, abstract: false, final false
  inline void set_Password(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChallengeResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChallengeResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChallengeResponse(ChallengeResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChallengeResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChallengeResponse(ChallengeResponse const&) = delete;

  /// @brief Field _disposed, offset: 0x10, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field _challenge, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____challenge;

  /// @brief Field _lmpwd, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____lmpwd;

  /// @brief Field _ntpwd, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____ntpwd;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Protocol::Ntlm::ChallengeResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::ChallengeResponse, ____disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::ChallengeResponse, ____challenge) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::ChallengeResponse, ____lmpwd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::ChallengeResponse, ____ntpwd) == 0x28, "Offset mismatch!");

} // namespace Mono::Security::Protocol::Ntlm
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::ChallengeResponse);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::ChallengeResponse*, "Mono.Security.Protocol.Ntlm", "ChallengeResponse");
