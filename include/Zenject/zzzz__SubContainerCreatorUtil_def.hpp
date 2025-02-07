#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorUtil)
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorUtil;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorUtil);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerCreatorUtil
class CORDL_TYPE SubContainerCreatorUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method ApplyBindSettings, addr 0x4b44b1c, size 0x304, virtual false, abstract: false, final false
  static inline void ApplyBindSettings(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::DiContainer* subContainer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorUtil(SubContainerCreatorUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorUtil(SubContainerCreatorUtil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12637 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorUtil, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorUtil);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorUtil*, "Zenject", "SubContainerCreatorUtil");
