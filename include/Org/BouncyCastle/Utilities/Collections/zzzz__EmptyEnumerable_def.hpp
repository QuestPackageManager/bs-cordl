#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EmptyEnumerable)
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class EmptyEnumerable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable);
// Type: Org.BouncyCastle.Utilities.Collections::EmptyEnumerable
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1778))
// CS Name: ::Org.BouncyCastle.Utilities.Collections::EmptyEnumerable*
class CORDL_TYPE EmptyEnumerable : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::System::Collections::IEnumerable* Instance;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  static inline void setStaticF_Instance(::System::Collections::IEnumerable* value);

  static inline ::System::Collections::IEnumerable* getStaticF_Instance();

  static inline ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable* New_ctor();

  /// @brief Method .ctor addr 0x11579f0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method GetEnumerator addr 0x11579f8 size 0x58 virtual true final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyEnumerable(EmptyEnumerable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyEnumerable(EmptyEnumerable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyEnumerable();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*, "Org.BouncyCastle.Utilities.Collections", "EmptyEnumerable");
