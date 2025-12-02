#pragma once
// IWYU pragma private; include "GlobalNamespace/IAppIdentification.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IAppIdentification)
// Forward declare root types
namespace GlobalNamespace {
class IAppIdentification;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IAppIdentification);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IAppIdentification
class CORDL_TYPE IAppIdentification {
public:
  // Declarations
  __declspec(property(get = get_appId)) uint64_t appId;

  __declspec(property(get = get_graphAppId)) uint64_t graphAppId;

  /// @brief Method get_appId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline uint64_t get_appId();

  /// @brief Method get_graphAppId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline uint64_t get_graphAppId();

  // Ctor Parameters [CppParam { name: "", ty: "IAppIdentification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAppIdentification(IAppIdentification const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14762 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IAppIdentification);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAppIdentification*, "", "IAppIdentification");
