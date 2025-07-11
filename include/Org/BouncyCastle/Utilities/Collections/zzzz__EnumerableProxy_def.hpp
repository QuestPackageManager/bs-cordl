#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Collections/EnumerableProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnumerableProxy)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class EnumerableProxy;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::EnumerableProxy);
// Dependencies System.Collections.IEnumerable, System.Object
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Collections.EnumerableProxy
class CORDL_TYPE EnumerableProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field inner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_inner, put = __cordl_internal_set_inner)) ::System::Collections::IEnumerable* inner;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method GetEnumerator, addr 0x25d2150, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy* New_ctor(::System::Collections::IEnumerable* inner);

  constexpr ::System::Collections::IEnumerable* const& __cordl_internal_get_inner() const;

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_inner();

  constexpr void __cordl_internal_set_inner(::System::Collections::IEnumerable* value);

  /// @brief Method .ctor, addr 0x25d20dc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* inner);

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumerableProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumerableProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumerableProxy(EnumerableProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumerableProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumerableProxy(EnumerableProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1780 };

  /// @brief Field inner, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IEnumerable* ___inner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Utilities::Collections::EnumerableProxy, ___inner) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::EnumerableProxy, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::EnumerableProxy);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::EnumerableProxy*, "Org.BouncyCastle.Utilities.Collections", "EnumerableProxy");
