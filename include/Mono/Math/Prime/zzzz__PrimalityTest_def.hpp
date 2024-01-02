#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrimalityTest)
namespace System {
class Object;
}
namespace Mono::Math::Prime {
struct ConfidenceFactor;
}
namespace Mono::Math {
class BigInteger;
}
// Forward declare root types
namespace Mono::Math::Prime {
class PrimalityTest;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Math::Prime::PrimalityTest);
// Type: Mono.Math.Prime::PrimalityTest
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Math::Prime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13809))
// CS Name: ::Mono.Math.Prime::PrimalityTest*
class CORDL_TYPE PrimalityTest : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::Mono::Math::Prime::PrimalityTest* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x240fe24, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x240ff54, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::Mono::Math::BigInteger* bi, ::Mono::Math::Prime::ConfidenceFactor confidence);

  // Ctor Parameters [CppParam { name: "", ty: "PrimalityTest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimalityTest(PrimalityTest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimalityTest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimalityTest(PrimalityTest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimalityTest();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Math::Prime::PrimalityTest, 0x80>, "Size mismatch!");

} // namespace Mono::Math::Prime
NEED_NO_BOX(::Mono::Math::Prime::PrimalityTest);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::Prime::PrimalityTest*, "Mono.Math.Prime", "PrimalityTest");
