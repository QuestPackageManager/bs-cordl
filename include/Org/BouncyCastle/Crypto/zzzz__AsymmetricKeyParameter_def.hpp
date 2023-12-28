#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsymmetricKeyParameter)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter);
// Type: Org.BouncyCastle.Crypto::AsymmetricKeyParameter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1020))
// CS Name: ::Org.BouncyCastle.Crypto::AsymmetricKeyParameter*
class CORDL_TYPE AsymmetricKeyParameter : public ::System::Object {
public:
  // Declarations
  /// @brief Field privateKey, offset 0x10, size 0x1
  __declspec(property(get = __get_privateKey, put = __set_privateKey)) bool privateKey;

  __declspec(property(get = get_IsPrivate)) bool IsPrivate;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  constexpr bool& __get_privateKey();

  constexpr bool const& __get_privateKey() const;

  constexpr void __set_privateKey(bool value);

  static inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* New_ctor(bool privateKey);

  /// @brief Method .ctor addr 0xf30398 size 0x28 virtual false final false
  inline void _ctor(bool privateKey);

  /// @brief Method get_IsPrivate addr 0xf303c0 size 0x8 virtual false final false
  inline bool get_IsPrivate();

  /// @brief Method Equals addr 0xf303c8 size 0x98 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0xf30460 size 0x24 virtual false final false
  inline bool Equals(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* other);

  /// @brief Method GetHashCode addr 0xf30484 size 0x20 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricKeyParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsymmetricKeyParameter(AsymmetricKeyParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricKeyParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsymmetricKeyParameter(AsymmetricKeyParameter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsymmetricKeyParameter();

public:
  /// @brief Field privateKey, offset: 0x10, size: 0x1, def value: None
  bool ___privateKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, "Org.BouncyCastle.Crypto", "AsymmetricKeyParameter");
