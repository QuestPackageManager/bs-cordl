#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Times.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Times)
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class Times;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Times);
// Dependencies System.Object
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Times
class CORDL_TYPE Times : public ::System::Object {
public:
  // Declarations
  /// @brief Field NanosecondsPerTick, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NanosecondsPerTick, put = setStaticF_NanosecondsPerTick)) int64_t NanosecondsPerTick;

  /// @brief Method NanoTime, addr 0x25ed180, size 0xa0, virtual false, abstract: false, final false
  static inline int64_t NanoTime();

  static inline ::Org::BouncyCastle::Utilities::Times* New_ctor();

  /// @brief Method .ctor, addr 0x25ed26c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int64_t getStaticF_NanosecondsPerTick();

  static inline void setStaticF_NanosecondsPerTick(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Times();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Times", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Times(Times&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Times", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Times(Times const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1838 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Times, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Times);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Times*, "Org.BouncyCastle.Utilities", "Times");
