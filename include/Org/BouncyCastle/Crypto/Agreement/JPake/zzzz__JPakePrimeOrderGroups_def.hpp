#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/JPake/JPakePrimeOrderGroups.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JPakePrimeOrderGroups)
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakePrimeOrderGroup;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakePrimeOrderGroups;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Agreement.JPake.JPakePrimeOrderGroups
class CORDL_TYPE JPakePrimeOrderGroups : public ::System::Object {
public:
  // Declarations
  /// @brief Field NIST_2048, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NIST_2048, put = setStaticF_NIST_2048)) ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* NIST_2048;

  /// @brief Field NIST_3072, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NIST_3072, put = setStaticF_NIST_3072)) ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* NIST_3072;

  /// @brief Field SUN_JCE_1024, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SUN_JCE_1024, put = setStaticF_SUN_JCE_1024)) ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* SUN_JCE_1024;

  static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups* New_ctor();

  /// @brief Method .ctor, addr 0x2689d84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* getStaticF_NIST_2048();

  static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* getStaticF_NIST_3072();

  static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* getStaticF_SUN_JCE_1024();

  static inline void setStaticF_NIST_2048(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* value);

  static inline void setStaticF_NIST_3072(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* value);

  static inline void setStaticF_SUN_JCE_1024(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JPakePrimeOrderGroups();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JPakePrimeOrderGroups", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JPakePrimeOrderGroups(JPakePrimeOrderGroups&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JPakePrimeOrderGroups", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JPakePrimeOrderGroups(JPakePrimeOrderGroups const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 716 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::JPake
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups*, "Org.BouncyCastle.Crypto.Agreement.JPake", "JPakePrimeOrderGroups");
