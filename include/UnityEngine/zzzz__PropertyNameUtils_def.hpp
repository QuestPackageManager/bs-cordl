#pragma once
// IWYU pragma private; include "UnityEngine/PropertyNameUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PropertyNameUtils)
namespace UnityEngine {
struct PropertyName;
}
// Forward declare root types
namespace UnityEngine {
class PropertyNameUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PropertyNameUtils);
// Type: UnityEngine::PropertyNameUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::PropertyNameUtils*
class CORDL_TYPE PropertyNameUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method PropertyNameFromString, addr 0x343ed88, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::PropertyName PropertyNameFromString(::StringW name);

  /// @brief Method PropertyNameFromString_Injected, addr 0x343ef54, size 0x44, virtual false, abstract: false, final false
  static inline void PropertyNameFromString_Injected(::StringW name, ByRef<::UnityEngine::PropertyName> ret);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyNameUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyNameUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyNameUtils(PropertyNameUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyNameUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyNameUtils(PropertyNameUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PropertyNameUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::PropertyNameUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PropertyNameUtils*, "UnityEngine", "PropertyNameUtils");
