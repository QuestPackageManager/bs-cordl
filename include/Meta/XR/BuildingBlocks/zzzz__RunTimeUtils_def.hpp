#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/RunTimeUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RunTimeUtils)
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace Meta::XR::BuildingBlocks {
class RunTimeUtils;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::BuildingBlocks::RunTimeUtils);
// Dependencies System.Object
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.RunTimeUtils
class CORDL_TYPE RunTimeUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method GenerateRandomString, addr 0x5885ef0, size 0x200, virtual false, abstract: false, final false
  static inline ::StringW GenerateRandomString(int32_t size, bool includeLowercase, bool includeUppercase, bool includeNumeric, bool includeSpecial);

  /// @brief Method GetInterfaceComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetInterfaceComponent(::UnityEngine::MonoBehaviour* monoBehaviour);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunTimeUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RunTimeUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RunTimeUtils(RunTimeUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RunTimeUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RunTimeUtils(RunTimeUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21169 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::RunTimeUtils, 0x10>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
NEED_NO_BOX(::Meta::XR::BuildingBlocks::RunTimeUtils);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::RunTimeUtils*, "Meta.XR.BuildingBlocks", "RunTimeUtils");
