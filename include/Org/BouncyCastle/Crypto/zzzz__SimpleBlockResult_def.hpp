#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleBlockResult)
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class SimpleBlockResult;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::SimpleBlockResult);
// Type: Org.BouncyCastle.Crypto::SimpleBlockResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1354))
// CS Name: ::Org.BouncyCastle.Crypto::SimpleBlockResult*
class CORDL_TYPE SimpleBlockResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field result, offset 0x10, size 0x8
  __declspec(property(get = __get_result, put = __set_result))::ArrayW<uint8_t, ::Array<uint8_t>*> result;

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockResult"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockResult*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockResult"
  constexpr ::Org::BouncyCastle::Crypto::IBlockResult* i___Org__BouncyCastle__Crypto__IBlockResult() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_result();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_result() const;

  constexpr void __set_result(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::SimpleBlockResult* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> result);

  /// @brief Method .ctor, addr 0xfc5ffc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> result);

  /// @brief Method get_Length, addr 0xfc6024, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method Collect, addr 0xfc6040, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Collect();

  /// @brief Method Collect, addr 0xfc6048, size 0x40, virtual true, abstract: false, final true
  inline int32_t Collect(::ArrayW<uint8_t, ::Array<uint8_t>*> destination, int32_t offset);

  // Ctor Parameters [CppParam { name: "", ty: "SimpleBlockResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleBlockResult(SimpleBlockResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleBlockResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleBlockResult(SimpleBlockResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleBlockResult();

public:
  /// @brief Field result, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::SimpleBlockResult, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::SimpleBlockResult, ___result) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::SimpleBlockResult);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::SimpleBlockResult*, "Org.BouncyCastle.Crypto", "SimpleBlockResult");
