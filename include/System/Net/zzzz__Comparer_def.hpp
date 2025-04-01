#pragma once
// IWYU pragma private; include "System/Net/Comparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Comparer)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class Comparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Comparer);
// Dependencies System.Collections.IComparer, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Comparer
class CORDL_TYPE Comparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  static inline ::System::Net::Comparer* New_ctor();

  /// @brief Method System.Collections.IComparer.Compare, addr 0x44aac90, size 0xe4, virtual true, abstract: false, final true
  inline int32_t System_Collections_IComparer_Compare(::System::Object* ol, ::System::Object* _cordl_or);

  /// @brief Method .ctor, addr 0x44aad74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Comparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Comparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Comparer(Comparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Comparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Comparer(Comparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9646 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Comparer, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::Comparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Comparer*, "System.Net", "Comparer");
