#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Collections/EmptyEnumerable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EmptyEnumerable)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class EmptyEnumerable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable);
// Dependencies System.Collections.IEnumerable, System.Object
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Collections.EmptyEnumerable
class CORDL_TYPE EmptyEnumerable : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Collections::IEnumerable* Instance;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method GetEnumerator, addr 0x25d62dc, size 0x58, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable* New_ctor();

  /// @brief Method .ctor, addr 0x25d62d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IEnumerable* getStaticF_Instance();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  static inline void setStaticF_Instance(::System::Collections::IEnumerable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyEnumerable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyEnumerable(EmptyEnumerable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyEnumerable(EmptyEnumerable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1778 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*, "Org.BouncyCastle.Utilities.Collections", "EmptyEnumerable");
