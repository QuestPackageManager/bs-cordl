#pragma once
// IWYU pragma private; include "System/Collections/CaseInsensitiveComparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CaseInsensitiveComparer)
namespace System::Globalization {
class CompareInfo;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class CaseInsensitiveComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::CaseInsensitiveComparer);
// Dependencies System.Collections.IComparer, System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.CaseInsensitiveComparer
class CORDL_TYPE CaseInsensitiveComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _compareInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__compareInfo, put = __cordl_internal_set__compareInfo)) ::System::Globalization::CompareInfo* _compareInfo;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Method Compare, addr 0x3dbc558, size 0xec, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* a, ::System::Object* b);

  static inline ::System::Collections::CaseInsensitiveComparer* New_ctor();

  static inline ::System::Collections::CaseInsensitiveComparer* New_ctor(::System::Globalization::CultureInfo* culture);

  constexpr ::System::Globalization::CompareInfo* const& __cordl_internal_get__compareInfo() const;

  constexpr ::System::Globalization::CompareInfo*& __cordl_internal_get__compareInfo();

  constexpr void __cordl_internal_set__compareInfo(::System::Globalization::CompareInfo* value);

  /// @brief Method .ctor, addr 0x3dbc458, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3dbc4d4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::CultureInfo* culture);

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CaseInsensitiveComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CaseInsensitiveComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CaseInsensitiveComparer(CaseInsensitiveComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CaseInsensitiveComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CaseInsensitiveComparer(CaseInsensitiveComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3778 };

  /// @brief Field _compareInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Globalization::CompareInfo* ____compareInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::CaseInsensitiveComparer, ____compareInfo) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::CaseInsensitiveComparer, 0x18>, "Size mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::CaseInsensitiveComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::CaseInsensitiveComparer*, "System.Collections", "CaseInsensitiveComparer");
