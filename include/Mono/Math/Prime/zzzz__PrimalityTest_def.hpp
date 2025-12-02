#pragma once
// IWYU pragma private; include "Mono/Math/Prime/PrimalityTest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(PrimalityTest)
namespace Mono::Math::Prime {
struct ConfidenceFactor;
}
namespace Mono::Math {
class BigInteger;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Math::Prime {
class PrimalityTest;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Math::Prime::PrimalityTest);
// Dependencies System.MulticastDelegate
namespace Mono::Math::Prime {
// Is value type: false
// CS Name: Mono.Math.Prime.PrimalityTest
class CORDL_TYPE PrimalityTest : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x58b11d4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::Mono::Math::BigInteger* bi, ::Mono::Math::Prime::ConfidenceFactor confidence);

  static inline ::Mono::Math::Prime::PrimalityTest* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x58b108c, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimalityTest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrimalityTest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimalityTest(PrimalityTest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimalityTest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimalityTest(PrimalityTest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2292 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Math::Prime::PrimalityTest, 0x80>, "Size mismatch!");

} // namespace Mono::Math::Prime
NEED_NO_BOX(::Mono::Math::Prime::PrimalityTest);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::Prime::PrimalityTest*, "Mono.Math.Prime", "PrimalityTest");
