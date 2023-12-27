#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IObjectInitializationDataProvider)
namespace UnityEngine::ResourceManagement::Util {
struct ObjectInitializationData;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class IObjectInitializationDataProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider);
// Type: UnityEngine.ResourceManagement.Util::IObjectInitializationDataProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13976))
// CS Name: ::UnityEngine.ResourceManagement.Util::IObjectInitializationDataProvider*
class CORDL_TYPE IObjectInitializationDataProvider {
public:
  // Declarations
  __declspec(property(get = get_Name))::StringW Name;

  /// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_Name();

  /// @brief Method CreateObjectInitializationData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::ResourceManagement::Util::ObjectInitializationData CreateObjectInitializationData();

  // Ctor Parameters [CppParam { name: "", ty: "IObjectInitializationDataProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IObjectInitializationDataProvider(IObjectInitializationDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IObjectInitializationDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IObjectInitializationDataProvider(IObjectInitializationDataProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider*, "UnityEngine.ResourceManagement.Util", "IObjectInitializationDataProvider");
