#pragma once
// IWYU pragma private; include "System\Collections\Generic\InternalStringComparer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalStringComparer)
// Forward declare root types
namespace System::Collections::Generic {
class InternalStringComparer;
}
// Write type traits
MARK_REF_T(::System::Collections::Generic::InternalStringComparer*);
DEFINE_IL2CPP_CLASS(::System::Collections::Generic::InternalStringComparer*, "System.Collections.Generic", "InternalStringComparer");
// Dependencies System.Collections.Generic.EqualityComparer`1<T>
namespace System::Collections::Generic {
// Is value type: false
// CS Name: System.Collections.Generic.InternalStringComparer
class CORDL_TYPE InternalStringComparer : public ::System::Collections::Generic::EqualityComparer_1<::StringW> {
public:
  // Declarations
  /// @brief Method Equals, addr 0x5bf3b94, size 0x30, virtual true, abstract: false, final false
  inline bool Equals(::StringW x, ::StringW y);

  /// @brief Method GetHashCode, addr 0x5bf3b74, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode(::StringW obj);

  /// @brief Method IndexOf, addr 0x5bf3bc4, size 0x64, virtual true, abstract: false, final false
  inline int32_t IndexOf(::ArrayW<::StringW> array, ::StringW value, int32_t startIndex, int32_t count);

  static inline ::System::Collections::Generic::InternalStringComparer* New_ctor();

  /// @brief Method .ctor, addr 0x5bf3c28, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalStringComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalStringComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalStringComparer(InternalStringComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalStringComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalStringComparer(InternalStringComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3818 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Collections::Generic::InternalStringComparer) == 0x10, "Size mismatch!");

} // namespace System::Collections::Generic
