#pragma once
// IWYU pragma private; include "GlobalNamespace/OVREnumerable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVREnumerable)
namespace GlobalNamespace {
template <typename T> struct OVREnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVREnumerable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVREnumerable);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVREnumerable
class CORDL_TYPE OVREnumerable : public ::System::Object {
public:
  // Declarations
  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t CopyTo(::GlobalNamespace::OVREnumerable_1<T> enumerable, T* memory);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVREnumerable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVREnumerable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVREnumerable(OVREnumerable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVREnumerable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVREnumerable(OVREnumerable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7888 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVREnumerable, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVREnumerable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVREnumerable*, "", "OVREnumerable");
