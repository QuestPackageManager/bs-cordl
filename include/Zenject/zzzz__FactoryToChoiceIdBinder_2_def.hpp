#pragma once
// IWYU pragma private; include "Zenject/FactoryToChoiceIdBinder_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_2_def.hpp"
CORDL_MODULE_EXPORT(FactoryToChoiceIdBinder_2)
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
template <typename TParam1, typename TContract> class FactoryArgumentsToChoiceBinder_2;
}
namespace Zenject {
class FactoryBindInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TContract> class FactoryToChoiceIdBinder_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryToChoiceIdBinder_2);
// Dependencies Zenject.FactoryArgumentsToChoiceBinder`2<TParam1, TContract>
namespace Zenject {
// cpp template
template <typename TParam1, typename TContract>
// Is value type: false
// CS Name: Zenject.FactoryToChoiceIdBinder`2<TParam1,TContract>
class CORDL_TYPE FactoryToChoiceIdBinder_2 : public ::Zenject::FactoryArgumentsToChoiceBinder_2<TParam1, TContract> {
public:
  // Declarations
  static inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method WithId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FactoryArgumentsToChoiceBinder_2<TParam1, TContract>* WithId(::System::Object* identifier);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryToChoiceIdBinder_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryToChoiceIdBinder_2(FactoryToChoiceIdBinder_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryToChoiceIdBinder_2(FactoryToChoiceIdBinder_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12197 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceIdBinder_2, "Zenject", "FactoryToChoiceIdBinder`2");
