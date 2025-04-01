#pragma once
// IWYU pragma private; include "System/InvariantComparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InvariantComparer)
namespace System::Globalization {
class CompareInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class InvariantComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::InvariantComparer);
// Dependencies System.Collections.IComparer, System.Object
namespace System {
// Is value type: false
// CS Name: System.InvariantComparer
class CORDL_TYPE InvariantComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::System::InvariantComparer* Default;

  /// @brief Field m_compareInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_compareInfo, put = __cordl_internal_set_m_compareInfo)) ::System::Globalization::CompareInfo* m_compareInfo;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Method Compare, addr 0x4405a08, size 0xec, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* a, ::System::Object* b);

  static inline ::System::InvariantComparer* New_ctor();

  constexpr ::System::Globalization::CompareInfo* const& __cordl_internal_get_m_compareInfo() const;

  constexpr ::System::Globalization::CompareInfo*& __cordl_internal_get_m_compareInfo();

  constexpr void __cordl_internal_set_m_compareInfo(::System::Globalization::CompareInfo* value);

  /// @brief Method .ctor, addr 0x440598c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::InvariantComparer* getStaticF_Default();

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

  static inline void setStaticF_Default(::System::InvariantComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvariantComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvariantComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvariantComparer(InvariantComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvariantComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvariantComparer(InvariantComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9188 };

  /// @brief Field m_compareInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Globalization::CompareInfo* ___m_compareInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::InvariantComparer, ___m_compareInfo) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::InvariantComparer, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::InvariantComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::InvariantComparer*, "System", "InvariantComparer");
