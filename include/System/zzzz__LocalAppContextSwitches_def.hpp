#pragma once
// IWYU pragma private; include "System/LocalAppContextSwitches.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalAppContextSwitches)
// Forward declare root types
namespace System {
class LocalAppContextSwitches;
}
// Write type traits
MARK_REF_PTR_T(::System::LocalAppContextSwitches);
// Type: System::LocalAppContextSwitches
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::LocalAppContextSwitches*
class CORDL_TYPE LocalAppContextSwitches : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_allowArbitraryTypeInstantiation, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_allowArbitraryTypeInstantiation, put = setStaticF_s_allowArbitraryTypeInstantiation)) int32_t s_allowArbitraryTypeInstantiation;

  static inline int32_t getStaticF_s_allowArbitraryTypeInstantiation();

  /// @brief Method get_AllowArbitraryTypeInstantiation, addr 0x40bed44, size 0x80, virtual false, abstract: false, final false
  static inline bool get_AllowArbitraryTypeInstantiation();

  static inline void setStaticF_s_allowArbitraryTypeInstantiation(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalAppContextSwitches();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalAppContextSwitches", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalAppContextSwitches(LocalAppContextSwitches&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalAppContextSwitches", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalAppContextSwitches(LocalAppContextSwitches const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11292 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::LocalAppContextSwitches, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::LocalAppContextSwitches);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalAppContextSwitches*, "System", "LocalAppContextSwitches");
