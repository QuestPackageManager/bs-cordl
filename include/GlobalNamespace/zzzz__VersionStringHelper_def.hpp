#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VersionStringHelper)
// Forward declare root types
namespace GlobalNamespace {
class VersionStringHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VersionStringHelper);
// Type: ::VersionStringHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13829))
// CS Name: ::VersionStringHelper*
class CORDL_TYPE VersionStringHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetMajorVersionNumber addr 0x1f9376c size 0x70 virtual false final false
  static inline int32_t GetMajorVersionNumber(::StringW versionString);

  // Ctor Parameters [CppParam { name: "", ty: "VersionStringHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VersionStringHelper(VersionStringHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VersionStringHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VersionStringHelper(VersionStringHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VersionStringHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VersionStringHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VersionStringHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VersionStringHelper*, "", "VersionStringHelper");
