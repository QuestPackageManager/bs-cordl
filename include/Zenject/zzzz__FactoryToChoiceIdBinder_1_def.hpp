#pragma once
// IWYU pragma private; include "Zenject/FactoryToChoiceIdBinder_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_def.hpp"
CORDL_MODULE_EXPORT(FactoryToChoiceIdBinder_1)
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
template <typename TContract> class FactoryArgumentsToChoiceBinder_1;
}
namespace Zenject {
class FactoryBindInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class FactoryToChoiceIdBinder_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryToChoiceIdBinder_1);
// Dependencies Zenject.FactoryArgumentsToChoiceBinder`1<TContract>
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.FactoryToChoiceIdBinder`1<TContract>
class CORDL_TYPE FactoryToChoiceIdBinder_1 : public ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract> {
public:
  // Declarations
  static inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* New_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method WithId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* WithId(::System::Object* identifier);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryToChoiceIdBinder_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryToChoiceIdBinder_1(FactoryToChoiceIdBinder_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryToChoiceIdBinder_1(FactoryToChoiceIdBinder_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12198 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceIdBinder_1, "Zenject", "FactoryToChoiceIdBinder`1");
