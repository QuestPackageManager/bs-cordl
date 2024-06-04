#pragma once
// IWYU pragma private; include "GlobalNamespace/HEU_ExampleInstanceCustomAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ExampleInstanceCustomAttribute)
namespace HoudiniEngineUnity {
class HEU_OutputAttribute;
}
// Forward declare root types
namespace GlobalNamespace {
class HEU_ExampleInstanceCustomAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HEU_ExampleInstanceCustomAttribute);
// Type: ::HEU_ExampleInstanceCustomAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HEU_ExampleInstanceCustomAttribute*
class CORDL_TYPE HEU_ExampleInstanceCustomAttribute : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method InstancerCallback, addr 0x25478fc, size 0x3ac, virtual false, abstract: false, final false
  inline void InstancerCallback();

  /// @brief Method LogArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void LogArray(::StringW name, ::ArrayW<T, ::Array<T>*> arr, int32_t tupleSize);

  /// @brief Method LogAttr, addr 0x2547ca8, size 0x154, virtual false, abstract: false, final false
  static inline void LogAttr(::HoudiniEngineUnity::HEU_OutputAttribute* outAttr);

  static inline ::GlobalNamespace::HEU_ExampleInstanceCustomAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2547dfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ExampleInstanceCustomAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_ExampleInstanceCustomAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ExampleInstanceCustomAttribute(HEU_ExampleInstanceCustomAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ExampleInstanceCustomAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ExampleInstanceCustomAttribute(HEU_ExampleInstanceCustomAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HEU_ExampleInstanceCustomAttribute, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HEU_ExampleInstanceCustomAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HEU_ExampleInstanceCustomAttribute*, "", "HEU_ExampleInstanceCustomAttribute");
