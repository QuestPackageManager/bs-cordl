#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorBindInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorBindInfo)
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorBindInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorBindInfo);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerCreatorBindInfo
class CORDL_TYPE SubContainerCreatorBindInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CreateKernel, put = set_CreateKernel)) bool CreateKernel;

  __declspec(property(get = get_DefaultParentName, put = set_DefaultParentName)) ::StringW DefaultParentName;

  __declspec(property(get = get_KernelType, put = set_KernelType)) ::System::Type* KernelType;

  /// @brief Field <CreateKernel>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__CreateKernel_k__BackingField, put = __cordl_internal_set__CreateKernel_k__BackingField)) bool _CreateKernel_k__BackingField;

  /// @brief Field <DefaultParentName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__DefaultParentName_k__BackingField, put = __cordl_internal_set__DefaultParentName_k__BackingField)) ::StringW _DefaultParentName_k__BackingField;

  /// @brief Field <KernelType>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__KernelType_k__BackingField, put = __cordl_internal_set__KernelType_k__BackingField)) ::System::Type* _KernelType_k__BackingField;

  static inline ::Zenject::SubContainerCreatorBindInfo* New_ctor();

  constexpr bool const& __cordl_internal_get__CreateKernel_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CreateKernel_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__DefaultParentName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__DefaultParentName_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__KernelType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__KernelType_k__BackingField();

  constexpr void __cordl_internal_set__CreateKernel_k__BackingField(bool value);

  constexpr void __cordl_internal_set__DefaultParentName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__KernelType_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x6cbddc0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CreateKernel, addr 0x6cbdda0, size 0x8, virtual false, abstract: false, final false
  inline bool get_CreateKernel();

  /// @brief Method get_DefaultParentName, addr 0x6cbdd90, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DefaultParentName();

  /// @brief Method get_KernelType, addr 0x6cbddb0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_KernelType();

  /// @brief Method set_CreateKernel, addr 0x6cbdda8, size 0x8, virtual false, abstract: false, final false
  inline void set_CreateKernel(bool value);

  /// @brief Method set_DefaultParentName, addr 0x6cbdd98, size 0x8, virtual false, abstract: false, final false
  inline void set_DefaultParentName(::StringW value);

  /// @brief Method set_KernelType, addr 0x6cbddb8, size 0x8, virtual false, abstract: false, final false
  inline void set_KernelType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorBindInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorBindInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorBindInfo(SubContainerCreatorBindInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorBindInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorBindInfo(SubContainerCreatorBindInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14569 };

  /// @brief Field <DefaultParentName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____DefaultParentName_k__BackingField;

  /// @brief Field <CreateKernel>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____CreateKernel_k__BackingField;

  /// @brief Field <KernelType>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ____KernelType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerCreatorBindInfo, ____DefaultParentName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorBindInfo, ____CreateKernel_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorBindInfo, ____KernelType_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorBindInfo, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorBindInfo*, "Zenject", "SubContainerCreatorBindInfo");
