#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoConfig)
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CryptoConfig;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::CryptoConfig);
// Type: System.Security.Cryptography::CryptoConfig
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2976))
// CS Name: ::System.Security.Cryptography::CryptoConfig*
class CORDL_TYPE CryptoConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field lockObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lockObject, put = setStaticF_lockObject))::System::Object* lockObject;

  /// @brief Field algorithms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_algorithms, put = setStaticF_algorithms))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* algorithms;

  static inline void setStaticF_lockObject(::System::Object* value);

  static inline ::System::Object* getStaticF_lockObject();

  static inline void setStaticF_algorithms(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* getStaticF_algorithms();

  /// @brief Method CreateFromName addr 0x2311f90 size 0x58 virtual false final false
  static inline ::System::Object* CreateFromName(::StringW name);

  /// @brief Method CreateFromName addr 0x2313764 size 0x1f14 virtual false final false
  static inline ::System::Object* CreateFromName(::StringW name, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method MapNameToOID addr 0x23157c4 size 0x7b4 virtual false final false
  static inline ::StringW MapNameToOID(::StringW name);

  /// @brief Method EncodeOID addr 0x2315f78 size 0x40c virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeOID(::StringW str);

  /// @brief Method EncodeLongNumber addr 0x2316384 size 0x190 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeLongNumber(int64_t x);

  /// @brief Method get_AllowOnlyFipsAlgorithms addr 0x230f550 size 0x8 virtual false final false
  static inline bool get_AllowOnlyFipsAlgorithms();

  // Ctor Parameters [CppParam { name: "", ty: "CryptoConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptoConfig(CryptoConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptoConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptoConfig(CryptoConfig const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptoConfig();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CryptoConfig, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::CryptoConfig);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptoConfig*, "System.Security.Cryptography", "CryptoConfig");
