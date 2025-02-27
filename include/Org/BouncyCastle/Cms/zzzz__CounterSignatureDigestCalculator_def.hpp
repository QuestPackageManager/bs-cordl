#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CounterSignatureDigestCalculator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__IDigestCalculator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CounterSignatureDigestCalculator)
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CounterSignatureDigestCalculator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator);
// Dependencies Org.BouncyCastle.Cms.IDigestCalculator, System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CounterSignatureDigestCalculator
class CORDL_TYPE CounterSignatureDigestCalculator : public ::System::Object {
public:
  // Declarations
  /// @brief Field alg, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_alg, put = __cordl_internal_set_alg)) ::StringW alg;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::IDigestCalculator"
  constexpr operator ::Org::BouncyCastle::Cms::IDigestCalculator*() noexcept;

  /// @brief Method GetDigest, addr 0x2679d30, size 0xa8, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetDigest();

  static inline ::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator* New_ctor(::StringW alg, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  constexpr ::StringW const& __cordl_internal_get_alg() const;

  constexpr ::StringW& __cordl_internal_get_alg();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_data() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_alg(::StringW value);

  constexpr void __cordl_internal_set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x2679d04, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW alg, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Convert to "::Org::BouncyCastle::Cms::IDigestCalculator"
  constexpr ::Org::BouncyCastle::Cms::IDigestCalculator* i___Org__BouncyCastle__Cms__IDigestCalculator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CounterSignatureDigestCalculator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CounterSignatureDigestCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CounterSignatureDigestCalculator(CounterSignatureDigestCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CounterSignatureDigestCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CounterSignatureDigestCalculator(CounterSignatureDigestCalculator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 665 };

  /// @brief Field alg, offset: 0x10, size: 0x8, def value: None
  ::StringW ___alg;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator, ___alg) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator, ___data) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator*, "Org.BouncyCastle.Cms", "CounterSignatureDigestCalculator");
