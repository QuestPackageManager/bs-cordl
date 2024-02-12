#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
// Type: Org.BouncyCastle.Utilities.Collections::EnumerableProxy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1780))
// CS Name: ::Org.BouncyCastle.Utilities.Collections::EnumerableProxy*
class CORDL_TYPE EnumerableProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field inner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_inner, put = __cordl_internal_set_inner))::System::Collections::IEnumerable* inner;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_inner();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get_inner() const;

  constexpr void __cordl_internal_set_inner(::System::Collections::IEnumerable* value);

  static inline ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy* New_ctor(::System::Collections::IEnumerable* inner);

  /// @brief Method .ctor, addr 0x1185a0c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* inner);

  /// @brief Method GetEnumerator, addr 0x1185a84, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "EnumerableProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumerableProxy(EnumerableProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumerableProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumerableProxy(EnumerableProxy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumerableProxy();

public:
  /// @brief Field inner, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IEnumerable* ___inner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::EnumerableProxy, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Collections::EnumerableProxy, ___inner) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::EnumerableProxy);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::EnumerableProxy*, "Org.BouncyCastle.Utilities.Collections", "EnumerableProxy");
