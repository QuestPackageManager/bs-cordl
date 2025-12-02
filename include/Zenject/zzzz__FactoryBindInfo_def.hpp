#pragma once
// IWYU pragma private; include "Zenject/FactoryBindInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FactoryBindInfo)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class FactoryBindInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::FactoryBindInfo);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FactoryBindInfo
class CORDL_TYPE FactoryBindInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Arguments, put = set_Arguments)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Arguments;

  __declspec(property(get = get_FactoryType, put = set_FactoryType)) ::System::Type* FactoryType;

  __declspec(property(get = get_ProviderFunc, put = set_ProviderFunc)) ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* ProviderFunc;

  /// @brief Field <Arguments>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Arguments_k__BackingField,
                      put = __cordl_internal_set__Arguments_k__BackingField)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* _Arguments_k__BackingField;

  /// @brief Field <FactoryType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__FactoryType_k__BackingField, put = __cordl_internal_set__FactoryType_k__BackingField)) ::System::Type* _FactoryType_k__BackingField;

  /// @brief Field <ProviderFunc>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ProviderFunc_k__BackingField,
                      put = __cordl_internal_set__ProviderFunc_k__BackingField)) ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* _ProviderFunc_k__BackingField;

  static inline ::Zenject::FactoryBindInfo* New_ctor(::System::Type* factoryType);

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& __cordl_internal_get__Arguments_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __cordl_internal_get__Arguments_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__FactoryType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__FactoryType_k__BackingField();

  constexpr ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* const& __cordl_internal_get__ProviderFunc_k__BackingField() const;

  constexpr ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>*& __cordl_internal_get__ProviderFunc_k__BackingField();

  constexpr void __cordl_internal_set__Arguments_k__BackingField(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr void __cordl_internal_set__FactoryType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__ProviderFunc_k__BackingField(::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* value);

  /// @brief Method .ctor, addr 0x6c2b680, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* factoryType);

  /// @brief Method get_Arguments, addr 0x6c2b724, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* get_Arguments();

  /// @brief Method get_FactoryType, addr 0x6c2b704, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_FactoryType();

  /// @brief Method get_ProviderFunc, addr 0x6c2b714, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* get_ProviderFunc();

  /// @brief Method set_Arguments, addr 0x6c2b72c, size 0x8, virtual false, abstract: false, final false
  inline void set_Arguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  /// @brief Method set_FactoryType, addr 0x6c2b70c, size 0x8, virtual false, abstract: false, final false
  inline void set_FactoryType(::System::Type* value);

  /// @brief Method set_ProviderFunc, addr 0x6c2b71c, size 0x8, virtual false, abstract: false, final false
  inline void set_ProviderFunc(::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryBindInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryBindInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryBindInfo(FactoryBindInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryBindInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryBindInfo(FactoryBindInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14271 };

  /// @brief Field <FactoryType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____FactoryType_k__BackingField;

  /// @brief Field <ProviderFunc>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* ____ProviderFunc_k__BackingField;

  /// @brief Field <Arguments>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ____Arguments_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FactoryBindInfo, ____FactoryType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryBindInfo, ____ProviderFunc_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryBindInfo, ____Arguments_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::FactoryBindInfo, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::FactoryBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryBindInfo*, "Zenject", "FactoryBindInfo");
