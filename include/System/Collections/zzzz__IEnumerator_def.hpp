#pragma once
// IWYU pragma private; include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEnumerator)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class IEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::IEnumerator);
// Dependencies
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.IEnumerator
class CORDL_TYPE IEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  /// @brief Method MoveNext, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method get_Current, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "IEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEnumerator(IEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3767 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections
NEED_NO_BOX(::System::Collections::IEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IEnumerator*, "System.Collections", "IEnumerator");
