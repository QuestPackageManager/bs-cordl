#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/AsymmetricKeyParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsymmetricKeyParameter)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter);
// Type: Org.BouncyCastle.Crypto::AsymmetricKeyParameter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::AsymmetricKeyParameter*
class CORDL_TYPE AsymmetricKeyParameter : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsPrivate)) bool IsPrivate;

  /// @brief Field privateKey, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_privateKey, put = __cordl_internal_set_privateKey)) bool privateKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  /// @brief Method Equals, addr 0x2383ba8, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2383c40, size 0x24, virtual false, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* other);

  /// @brief Method GetHashCode, addr 0x2383c64, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* New_ctor(bool privateKey);

  constexpr bool const& __cordl_internal_get_privateKey() const;

  constexpr bool& __cordl_internal_get_privateKey();

  constexpr void __cordl_internal_set_privateKey(bool value);

  /// @brief Method .ctor, addr 0x2383b78, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool privateKey);

  /// @brief Method get_IsPrivate, addr 0x2383ba0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsPrivate();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsymmetricKeyParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricKeyParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsymmetricKeyParameter(AsymmetricKeyParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricKeyParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsymmetricKeyParameter(AsymmetricKeyParameter const&) = delete;

  /// @brief Field privateKey, offset: 0x10, size: 0x1, def value: None
  bool ___privateKey;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1020 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ___privateKey) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, "Org.BouncyCastle.Crypto", "AsymmetricKeyParameter");
