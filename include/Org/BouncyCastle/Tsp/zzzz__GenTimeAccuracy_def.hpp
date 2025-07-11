#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/GenTimeAccuracy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenTimeAccuracy)
namespace Org::BouncyCastle::Asn1::Tsp {
class Accuracy;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class GenTimeAccuracy;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::GenTimeAccuracy);
// Dependencies System.Object
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Tsp.GenTimeAccuracy
class CORDL_TYPE GenTimeAccuracy : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Micros)) int32_t Micros;

  __declspec(property(get = get_Millis)) int32_t Millis;

  __declspec(property(get = get_Seconds)) int32_t Seconds;

  /// @brief Field accuracy, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_accuracy, put = __cordl_internal_set_accuracy)) ::Org::BouncyCastle::Asn1::Tsp::Accuracy* accuracy;

  /// @brief Method GetTimeComponent, addr 0x25c9940, size 0x18, virtual false, abstract: false, final false
  inline int32_t GetTimeComponent(::Org::BouncyCastle::Asn1::DerInteger* time);

  static inline ::Org::BouncyCastle::Tsp::GenTimeAccuracy* New_ctor(::Org::BouncyCastle::Asn1::Tsp::Accuracy* accuracy);

  /// @brief Method ToString, addr 0x25c99b0, size 0x1bc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Org::BouncyCastle::Asn1::Tsp::Accuracy* const& __cordl_internal_get_accuracy() const;

  constexpr ::Org::BouncyCastle::Asn1::Tsp::Accuracy*& __cordl_internal_get_accuracy();

  constexpr void __cordl_internal_set_accuracy(::Org::BouncyCastle::Asn1::Tsp::Accuracy* value);

  /// @brief Method .ctor, addr 0x25c98ec, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Tsp::Accuracy* accuracy);

  /// @brief Method get_Micros, addr 0x25c9984, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_Micros();

  /// @brief Method get_Millis, addr 0x25c9958, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_Millis();

  /// @brief Method get_Seconds, addr 0x25c9914, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_Seconds();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenTimeAccuracy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenTimeAccuracy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenTimeAccuracy(GenTimeAccuracy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenTimeAccuracy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenTimeAccuracy(GenTimeAccuracy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1763 };

  /// @brief Field accuracy, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Tsp::Accuracy* ___accuracy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Tsp::GenTimeAccuracy, ___accuracy) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::GenTimeAccuracy, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::GenTimeAccuracy);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::GenTimeAccuracy*, "Org.BouncyCastle.Tsp", "GenTimeAccuracy");
