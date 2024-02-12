#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialUtility)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class MaterialUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MaterialUtility);
// Type: UnityEngine.ProBuilder::MaterialUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12036))
// CS Name: ::UnityEngine.ProBuilder::MaterialUtility*
class CORDL_TYPE MaterialUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_MaterialArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MaterialArray, put = setStaticF_s_MaterialArray))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* s_MaterialArray;

  static inline void setStaticF_s_MaterialArray(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* value);

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* getStaticF_s_MaterialArray();

  /// @brief Method GetMaterialCount, addr 0x2b46a3c, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t GetMaterialCount(::UnityEngine::Renderer* renderer);

  /// @brief Method GetSharedMaterial, addr 0x2b46b0c, size 0x140, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetSharedMaterial(::UnityEngine::Renderer* renderer, int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "MaterialUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialUtility(MaterialUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialUtility(MaterialUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MaterialUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::MaterialUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MaterialUtility*, "UnityEngine.ProBuilder", "MaterialUtility");
