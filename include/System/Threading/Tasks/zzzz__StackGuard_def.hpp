#pragma once
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
// Type: System.Threading.Tasks::StackGuard
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2793))
// CS Name: ::System.Threading.Tasks::StackGuard*
class CORDL_TYPE StackGuard : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_inliningDepth, offset 0x10, size 0x4
  __declspec(property(get = __get_m_inliningDepth, put = __set_m_inliningDepth)) int32_t m_inliningDepth;

  constexpr int32_t& __get_m_inliningDepth();

  constexpr int32_t const& __get_m_inliningDepth() const;

  constexpr void __set_m_inliningDepth(int32_t value);

  /// @brief Method TryBeginInliningScope, addr 0x262b39c, size 0x40, virtual false, abstract: false, final false
  inline bool TryBeginInliningScope();

  /// @brief Method EndInliningScope, addr 0x262b3dc, size 0x14, virtual false, abstract: false, final false
  inline void EndInliningScope();

  static inline ::System::Threading::Tasks::StackGuard* New_ctor();

  /// @brief Method .ctor, addr 0x26240c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StackGuard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StackGuard(StackGuard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StackGuard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StackGuard(StackGuard const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StackGuard();

public:
  /// @brief Field m_inliningDepth, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_inliningDepth;

  /// @brief Field MAX_UNCHECKED_INLINING_DEPTH offset 0xffffffff size 0x4
  static constexpr int32_t MAX_UNCHECKED_INLINING_DEPTH{ static_cast<int32_t>(0x14) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::StackGuard, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Tasks::StackGuard, ___m_inliningDepth) == 0x10, "Offset mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::StackGuard);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::StackGuard*, "System.Threading.Tasks", "StackGuard");
