#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/SimpleBlockResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleBlockResult)
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class SimpleBlockResult;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::SimpleBlockResult);
// Dependencies Org.BouncyCastle.Crypto.IBlockResult, System.Object
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.SimpleBlockResult
class CORDL_TYPE SimpleBlockResult : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Field result, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_result, put = __cordl_internal_set_result)) ::ArrayW<uint8_t, ::Array<uint8_t>*> result;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockResult"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockResult*() noexcept;

  /// @brief Method Collect, addr 0x244a9a4, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Collect();

  /// @brief Method Collect, addr 0x244a9ac, size 0x40, virtual true, abstract: false, final true
  inline int32_t Collect(::ArrayW<uint8_t, ::Array<uint8_t>*> destination, int32_t offset);

  static inline ::Org::BouncyCastle::Crypto::SimpleBlockResult* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> result);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_result() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_result();

  constexpr void __cordl_internal_set_result(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x244a960, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> result);

  /// @brief Method get_Length, addr 0x244a988, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockResult"
  constexpr ::Org::BouncyCastle::Crypto::IBlockResult* i___Org__BouncyCastle__Crypto__IBlockResult() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleBlockResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleBlockResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleBlockResult(SimpleBlockResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleBlockResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleBlockResult(SimpleBlockResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1354 };

  /// @brief Field result, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::SimpleBlockResult, ___result) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::SimpleBlockResult, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::SimpleBlockResult);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::SimpleBlockResult*, "Org.BouncyCastle.Crypto", "SimpleBlockResult");
