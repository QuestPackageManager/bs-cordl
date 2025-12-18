#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CryptoConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoConfig)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CryptoConfig;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::CryptoConfig);
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.CryptoConfig
class CORDL_TYPE CryptoConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field algorithms, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_algorithms, put = setStaticF_algorithms)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* algorithms;

  /// @brief Field lockObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_lockObject, put = setStaticF_lockObject)) ::System::Object* lockObject;

  /// @brief Method CreateFromName, addr 0x5957948, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* CreateFromName(::StringW name);

  /// @brief Method CreateFromName, addr 0x5958b78, size 0x20b4, virtual false, abstract: false, final false
  static inline ::System::Object* CreateFromName(::StringW name, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method EncodeLongNumber, addr 0x595b98c, size 0x15c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeLongNumber(int64_t x);

  /// @brief Method EncodeOID, addr 0x595b58c, size 0x400, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeOID(::StringW str);

  /// @brief Method MapNameToOID, addr 0x595acf0, size 0x89c, virtual false, abstract: false, final false
  static inline ::StringW MapNameToOID(::StringW name);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* getStaticF_algorithms();

  static inline ::System::Object* getStaticF_lockObject();

  /// @brief Method get_AllowOnlyFipsAlgorithms, addr 0x59537d4, size 0x8, virtual false, abstract: false, final false
  static inline bool get_AllowOnlyFipsAlgorithms();

  static inline void setStaticF_algorithms(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* value);

  static inline void setStaticF_lockObject(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptoConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CryptoConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptoConfig(CryptoConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptoConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptoConfig(CryptoConfig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2993 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CryptoConfig, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::CryptoConfig);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptoConfig*, "System.Security.Cryptography", "CryptoConfig");
