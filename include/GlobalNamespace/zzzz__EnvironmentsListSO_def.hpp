#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentsListSO)
namespace GlobalNamespace {
class EnvironmentTypeSO;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentsListSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentsListSO);
// Type: ::EnvironmentsListSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4213))
// CS Name: ::EnvironmentsListSO*
class CORDL_TYPE EnvironmentsListSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _environmentInfos, offset 0x18, size 0x8
  __declspec(property(get = __get__environmentInfos, put = __set__environmentInfos))::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> _environmentInfos;

  __declspec(property(get = get_environmentInfos))::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> environmentInfos;

  constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*>& __get__environmentInfos();

  constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> const& __get__environmentInfos() const;

  constexpr void __set__environmentInfos(::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> value);

  /// @brief Method get_environmentInfos addr 0x21d1a88 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> get_environmentInfos();

  /// @brief Method GetEnvironmentInfoBySerializedName addr 0x21d1a90 size 0x80 virtual false final false
  inline ::GlobalNamespace::EnvironmentInfoSO* GetEnvironmentInfoBySerializedName(::StringW environmentSerializedName);

  /// @brief Method GetAllEnvironmentInfosWithType addr 0x21d1b10 size 0x178 virtual false final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>* GetAllEnvironmentInfosWithType(::GlobalNamespace::EnvironmentTypeSO* environmentType);

  /// @brief Method GetFirstEnvironmentInfoWithType addr 0x21d1c88 size 0x84 virtual false final false
  inline ::GlobalNamespace::EnvironmentInfoSO* GetFirstEnvironmentInfoWithType(::GlobalNamespace::EnvironmentTypeSO* environmentType);

  /// @brief Method GetLastEnvironmentInfoWithType addr 0x21d1d0c size 0x80 virtual false final false
  inline ::GlobalNamespace::EnvironmentInfoSO* GetLastEnvironmentInfoWithType(::GlobalNamespace::EnvironmentTypeSO* environmentType);

  static inline ::GlobalNamespace::EnvironmentsListSO* New_ctor();

  /// @brief Method .ctor addr 0x21d1d8c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentsListSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentsListSO(EnvironmentsListSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentsListSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentsListSO(EnvironmentsListSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentsListSO();

public:
  /// @brief Field _environmentInfos, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> ____environmentInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentsListSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentsListSO, ____environmentInfos) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentsListSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentsListSO*, "", "EnvironmentsListSO");
