#pragma once
// IWYU pragma private; include "BGNet/Core/ITimeProvider.hpp"
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
// Dependencies
namespace BGNet::Core {
// Is value type: false
// CS Name: BGNet.Core.ITimeProvider
class CORDL_TYPE ITimeProvider {
public:
  // Declarations
  /// @brief Method GetTicks, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t GetTicks();

  /// @brief Method GetTimeMs, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t GetTimeMs();

  // Ctor Parameters [CppParam { name: "", ty: "ITimeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITimeProvider(ITimeProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15013 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Core
NEED_NO_BOX(::BGNet::Core::ITimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::ITimeProvider*, "BGNet.Core", "ITimeProvider");
