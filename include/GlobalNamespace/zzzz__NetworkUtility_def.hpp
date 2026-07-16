#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkUtility)
// Forward declare root types
namespace GlobalNamespace {
class NetworkUtility;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkUtility*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkUtility*, "", "NetworkUtility");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkUtility
class CORDL_TYPE NetworkUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field _nameEncryptionIv, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__nameEncryptionIv, put = setStaticF__nameEncryptionIv)) ::ArrayW<uint8_t> _nameEncryptionIv;

  /// @brief Field _nameEncryptionKey, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__nameEncryptionKey, put = setStaticF__nameEncryptionKey)) ::ArrayW<uint8_t> _nameEncryptionKey;

  /// @brief Method DecryptName, addr 0x33397e8, size 0x38c, virtual false, abstract: false, final false
  static inline ::StringW DecryptName(::StringW text);

  /// @brief Method EncryptName, addr 0x3339464, size 0x384, virtual false, abstract: false, final false
  static inline ::StringW EncryptName(::StringW text);

  /// @brief Method GenerateId, addr 0x3339b74, size 0x9c, virtual false, abstract: false, final false
  static inline ::StringW GenerateId();

  /// @brief Method GetHashBase64, addr 0x3339c10, size 0x1c4, virtual false, abstract: false, final false
  static inline ::StringW GetHashBase64(::StringW input);

  /// @brief Method Init, addr 0x333937c, size 0xe8, virtual false, abstract: false, final false
  static inline void Init();

  static inline ::ArrayW<uint8_t> getStaticF__nameEncryptionIv();

  static inline ::ArrayW<uint8_t> getStaticF__nameEncryptionKey();

  static inline void setStaticF__nameEncryptionIv(::ArrayW<uint8_t> value);

  static inline void setStaticF__nameEncryptionKey(::ArrayW<uint8_t> value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18207 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetworkUtility) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
