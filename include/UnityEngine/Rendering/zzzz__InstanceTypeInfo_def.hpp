#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceTypeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceTypeInfo)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
namespace UnityEngine::Rendering {
struct InstanceType;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class InstanceTypeInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::InstanceTypeInfo);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceTypeInfo
class CORDL_TYPE InstanceTypeInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_ChildTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ChildTypes, put = setStaticF_s_ChildTypes)) ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::InstanceType>*,
                                                                                              ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::InstanceType>*>*>
      s_ChildTypes;

  /// @brief Field s_ParentTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ParentTypes, put = setStaticF_s_ParentTypes)) ::ArrayW<::UnityEngine::Rendering::InstanceType, ::Array<::UnityEngine::Rendering::InstanceType>*> s_ParentTypes;

  /// @brief Method FlattenChildInstanceTypes, addr 0x6676d4c, size 0x194, virtual false, abstract: false, final false
  static inline void FlattenChildInstanceTypes(::UnityEngine::Rendering::InstanceType instanceType, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceType> instanceTypes);

  /// @brief Method GetChildTypes, addr 0x6676f60, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::InstanceType>* GetChildTypes(::UnityEngine::Rendering::InstanceType type);

  /// @brief Method GetMaxChildTypeRecursively, addr 0x6676bdc, size 0x170, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::InstanceType GetMaxChildTypeRecursively(::UnityEngine::Rendering::InstanceType type);

  /// @brief Method GetParentType, addr 0x6676ee0, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::InstanceType GetParentType(::UnityEngine::Rendering::InstanceType type);

  /// @brief Method InitChildTypes, addr 0x667684c, size 0x250, virtual false, abstract: false, final false
  static inline void InitChildTypes();

  /// @brief Method InitParentTypes, addr 0x6676794, size 0xb8, virtual false, abstract: false, final false
  static inline void InitParentTypes();

  /// @brief Method ValidateTypeRelationsAreCorrectlySorted, addr 0x6676a9c, size 0x140, virtual false, abstract: false, final false
  static inline void ValidateTypeRelationsAreCorrectlySorted();

  static inline ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::InstanceType>*, ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::InstanceType>*>*>
  getStaticF_s_ChildTypes();

  static inline ::ArrayW<::UnityEngine::Rendering::InstanceType, ::Array<::UnityEngine::Rendering::InstanceType>*> getStaticF_s_ParentTypes();

  static inline void setStaticF_s_ChildTypes(
      ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::InstanceType>*, ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::InstanceType>*>*> value);

  static inline void setStaticF_s_ParentTypes(::ArrayW<::UnityEngine::Rendering::InstanceType, ::Array<::UnityEngine::Rendering::InstanceType>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceTypeInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceTypeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceTypeInfo(InstanceTypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceTypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceTypeInfo(InstanceTypeInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17697 };

  /// @brief Field kInstanceTypeBitCount offset 0xffffffff size 0x4
  static constexpr int32_t kInstanceTypeBitCount{ static_cast<int32_t>(0x1) };

  /// @brief Field kInstanceTypeMask offset 0xffffffff size 0x4
  static constexpr uint32_t kInstanceTypeMask{ static_cast<uint32_t>(0x1u) };

  /// @brief Field kMaxInstanceTypesCount offset 0xffffffff size 0x4
  static constexpr int32_t kMaxInstanceTypesCount{ static_cast<int32_t>(0x2) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceTypeInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::InstanceTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceTypeInfo*, "UnityEngine.Rendering", "InstanceTypeInfo");
