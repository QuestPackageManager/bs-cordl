#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/ObjectInitializationData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/Util/zzzz__SerializedType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ObjectInitializationData)
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::Util {
struct SerializedType;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
struct ObjectInitializationData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::Util::ObjectInitializationData);
// Dependencies UnityEngine.ResourceManagement.Util.SerializedType
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.ObjectInitializationData
struct CORDL_TYPE ObjectInitializationData {
public:
  // Declarations
  __declspec(property(get = get_Data)) ::StringW Data;

  __declspec(property(get = get_Id)) ::StringW Id;

  __declspec(property(get = get_ObjectType)) ::UnityEngine::ResourceManagement::Util::SerializedType ObjectType;

  /// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline TObject CreateInstance(::StringW idOverride);

  /// @brief Method GetAsyncInitHandle, addr 0x47986e4, size 0x244, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle GetAsyncInitHandle(::UnityEngine::ResourceManagement::ResourceManager* rm, ::StringW idOverride);

  /// @brief Method ToString, addr 0x479864c, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_Data, addr 0x4798644, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Data();

  /// @brief Method get_Id, addr 0x479862c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method get_ObjectType, addr 0x4798634, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::Util::SerializedType get_ObjectType();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectInitializationData();

  // Ctor Parameters [CppParam { name: "m_Id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_ObjectType", ty: "::UnityEngine::ResourceManagement::Util::SerializedType",
  // modifiers: "", def_value: None }, CppParam { name: "m_Data", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr ObjectInitializationData(::StringW m_Id, ::UnityEngine::ResourceManagement::Util::SerializedType m_ObjectType, ::StringW m_Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15648 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_Id, offset: 0x0, size: 0x8, def value: None
  ::StringW m_Id;

  /// @brief Field m_ObjectType, offset: 0x8, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::Util::SerializedType m_ObjectType;

  /// @brief Field m_Data, offset: 0x28, size: 0x8, def value: None
  ::StringW m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::ObjectInitializationData, m_Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::ObjectInitializationData, m_ObjectType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::ObjectInitializationData, m_Data) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::ObjectInitializationData, 0x30>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::ObjectInitializationData, "UnityEngine.ResourceManagement.Util", "ObjectInitializationData");
