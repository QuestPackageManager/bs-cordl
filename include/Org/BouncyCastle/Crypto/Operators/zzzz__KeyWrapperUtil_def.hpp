#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/KeyWrapperUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyWrapperUtil)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IKeyUnwrapper;
}
namespace Org::BouncyCastle::Crypto {
class IKeyWrapper;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class KeyWrapperUtil;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Operators.KeyWrapperUtil
class CORDL_TYPE KeyWrapperUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Field providerMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_providerMap, put = setStaticF_providerMap)) ::System::Collections::IDictionary* providerMap;

  static inline ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil* New_ctor();

  /// @brief Method UnwrapperForName, addr 0x23b6384, size 0x230, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IKeyUnwrapper* UnwrapperForName(::StringW algorithm, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method WrapperForName, addr 0x23b5b7c, size 0x230, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IKeyWrapper* WrapperForName(::StringW algorithm, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method .ctor, addr 0x23b65b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IDictionary* getStaticF_providerMap();

  static inline void setStaticF_providerMap(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyWrapperUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyWrapperUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyWrapperUtil(KeyWrapperUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyWrapperUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyWrapperUtil(KeyWrapperUtil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 985 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*, "Org.BouncyCastle.Crypto.Operators", "KeyWrapperUtil");
