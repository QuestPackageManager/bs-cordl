#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/IX509Selector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IX509Selector)
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::IX509Selector);
// Type: Org.BouncyCastle.X509.Store::IX509Selector
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// CS Name: ::Org.BouncyCastle.X509.Store::IX509Selector*
class CORDL_TYPE IX509Selector {
public:
  // Declarations
  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Match, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Match(::System::Object* obj);

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IX509Selector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IX509Selector(IX509Selector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IX509Selector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IX509Selector(IX509Selector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 677 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::IX509Selector);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::IX509Selector*, "Org.BouncyCastle.X509.Store", "IX509Selector");
