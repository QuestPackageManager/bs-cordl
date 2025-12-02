#pragma once
// IWYU pragma private; include "System/Threading/Tasks/StackGuard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StackGuard)
// Forward declare root types
namespace System::Threading::Tasks {
class StackGuard;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::StackGuard);
// Dependencies System.Object
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.StackGuard
class CORDL_TYPE StackGuard : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_inliningDepth, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_inliningDepth, put = __cordl_internal_set_m_inliningDepth)) int32_t m_inliningDepth;

  /// @brief Method EndInliningScope, addr 0x5aaf21c, size 0x14, virtual false, abstract: false, final false
  inline void EndInliningScope();

  static inline ::System::Threading::Tasks::StackGuard* New_ctor();

  /// @brief Method TryBeginInliningScope, addr 0x5aaf204, size 0x18, virtual false, abstract: false, final false
  inline bool TryBeginInliningScope();

  constexpr int32_t const& __cordl_internal_get_m_inliningDepth() const;

  constexpr int32_t& __cordl_internal_get_m_inliningDepth();

  constexpr void __cordl_internal_set_m_inliningDepth(int32_t value);

  /// @brief Method .ctor, addr 0x5aa8144, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StackGuard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StackGuard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StackGuard(StackGuard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StackGuard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StackGuard(StackGuard const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2809 };

  /// @brief Field m_inliningDepth, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_inliningDepth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::StackGuard, ___m_inliningDepth) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::StackGuard, 0x18>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::StackGuard);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::StackGuard*, "System.Threading.Tasks", "StackGuard");
