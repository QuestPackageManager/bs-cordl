#pragma once
// IWYU pragma private; include "GlobalNamespace/IDspTimeProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IDspTimeProvider)
// Forward declare root types
namespace GlobalNamespace {
class IDspTimeProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IDspTimeProvider);
// Type: ::IDspTimeProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IDspTimeProvider*
class CORDL_TYPE IDspTimeProvider {
public:
  // Declarations
  __declspec(property(get = get_dspTime)) double_t dspTime;

  /// @brief Method get_dspTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t get_dspTime();

  // Ctor Parameters [CppParam { name: "", ty: "IDspTimeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDspTimeProvider(IDspTimeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDspTimeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDspTimeProvider(IDspTimeProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4004 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IDspTimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IDspTimeProvider*, "", "IDspTimeProvider");
