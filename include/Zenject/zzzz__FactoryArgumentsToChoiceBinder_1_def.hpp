#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryToChoiceBinder_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FactoryArgumentsToChoiceBinder_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
template <typename TContract> class FactoryToChoiceBinder_1;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class FactoryArgumentsToChoiceBinder_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryArgumentsToChoiceBinder_1);
// Type: Zenject::FactoryArgumentsToChoiceBinder`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: ::Zenject::FactoryArgumentsToChoiceBinder`1<TContract>*
class CORDL_TYPE FactoryArgumentsToChoiceBinder_1 : public ::Zenject::FactoryToChoiceBinder_1<TContract> {
public:
  // Declarations
  static inline ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method WithFactoryArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FactoryToChoiceBinder_1<TContract>* WithFactoryArguments(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method WithFactoryArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::FactoryToChoiceBinder_1<TContract>* WithFactoryArguments(T param);

  /// @brief Method WithFactoryArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2> inline ::Zenject::FactoryToChoiceBinder_1<TContract>* WithFactoryArguments(TParam1 param1, TParam2 param2);

  /// @brief Method WithFactoryArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3> inline ::Zenject::FactoryToChoiceBinder_1<TContract>* WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3);

  /// @brief Method WithFactoryArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  inline ::Zenject::FactoryToChoiceBinder_1<TContract>* WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4);

  /// @brief Method WithFactoryArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
  inline ::Zenject::FactoryToChoiceBinder_1<TContract>* WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5);

  /// @brief Method WithFactoryArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
  inline ::Zenject::FactoryToChoiceBinder_1<TContract>* WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6);

  /// @brief Method WithFactoryArgumentsExplicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FactoryToChoiceBinder_1<TContract>* WithFactoryArgumentsExplicit(::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArgs);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryArgumentsToChoiceBinder_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryArgumentsToChoiceBinder_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryArgumentsToChoiceBinder_1(FactoryArgumentsToChoiceBinder_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryArgumentsToChoiceBinder_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryArgumentsToChoiceBinder_1(FactoryArgumentsToChoiceBinder_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryArgumentsToChoiceBinder_1, "Zenject", "FactoryArgumentsToChoiceBinder`1");
