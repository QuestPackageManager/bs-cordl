#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GenericSignal_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatSignal)
// Forward declare root types
namespace GlobalNamespace {
class FloatSignal;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatSignal);
// Type: ::FloatSignal
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FloatSignal*
class CORDL_TYPE FloatSignal : public ::GlobalNamespace::GenericSignal_1<float_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::FloatSignal* New_ctor();

  /// @brief Method .ctor, addr 0x23dfa68, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatSignal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatSignal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatSignal(FloatSignal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatSignal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatSignal(FloatSignal const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatSignal, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatSignal);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatSignal*, "", "FloatSignal");
