#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkUtility)
namespace GlobalNamespace {
struct AuthenticationToken_Platform;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkUtility;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetworkUtility);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkUtility
class CORDL_TYPE NetworkUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field _nameEncryptionIv, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__nameEncryptionIv, put = setStaticF__nameEncryptionIv)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _nameEncryptionIv;

  /// @brief Field _nameEncryptionKey, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__nameEncryptionKey, put = setStaticF__nameEncryptionKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _nameEncryptionKey;

  /// @brief Method DecryptName, addr 0x22ddc78, size 0x420, virtual false, abstract: false, final false
  static inline ::StringW DecryptName(::StringW text);

  /// @brief Method EncryptName, addr 0x22dd85c, size 0x41c, virtual false, abstract: false, final false
  static inline ::StringW EncryptName(::StringW text);

  /// @brief Method GenerateId, addr 0x22de098, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW GenerateId();

  /// @brief Method GetHashBase64, addr 0x22dd654, size 0x208, virtual false, abstract: false, final false
  static inline ::StringW GetHashBase64(::StringW input);

  /// @brief Method GetHashedUserId, addr 0x22dd588, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW GetHashedUserId(::StringW userId, ::GlobalNamespace::AuthenticationToken_Platform platform);

  /// @brief Method Init, addr 0x22dd4a8, size 0xe0, virtual false, abstract: false, final false
  static inline void Init();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF__nameEncryptionIv();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF__nameEncryptionKey();

  static inline void setStaticF__nameEncryptionIv(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF__nameEncryptionKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkUtility(NetworkUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkUtility(NetworkUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14912 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkUtility, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkUtility*, "", "NetworkUtility");
