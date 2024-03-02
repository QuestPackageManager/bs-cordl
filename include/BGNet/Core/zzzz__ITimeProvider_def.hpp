#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITimeProvider)
// Forward declare root types
namespace BGNet::Core {
class ITimeProvider;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::ITimeProvider);
// Type: BGNet.Core::ITimeProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core {
// Is value type: false
// CS Name: ::BGNet.Core::ITimeProvider*
class CORDL_TYPE ITimeProvider {
public:
  // Declarations
  /// @brief Method GetTicks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t GetTicks();

  /// @brief Method GetTimeMs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t GetTimeMs();

  // Ctor Parameters [CppParam { name: "", ty: "ITimeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITimeProvider(ITimeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITimeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITimeProvider(ITimeProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Core
NEED_NO_BOX(::BGNet::Core::ITimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::ITimeProvider*, "BGNet.Core", "ITimeProvider");
