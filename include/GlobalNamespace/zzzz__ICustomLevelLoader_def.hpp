#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICustomLevelLoader)
// Forward declare root types
namespace GlobalNamespace {
class ICustomLevelLoader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ICustomLevelLoader);
// Type: ::ICustomLevelLoader
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ICustomLevelLoader*
class CORDL_TYPE ICustomLevelLoader {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "ICustomLevelLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICustomLevelLoader(ICustomLevelLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICustomLevelLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICustomLevelLoader(ICustomLevelLoader const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ICustomLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ICustomLevelLoader*, "", "ICustomLevelLoader");
