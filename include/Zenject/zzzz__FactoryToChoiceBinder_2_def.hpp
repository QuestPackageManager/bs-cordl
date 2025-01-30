#pragma once
// IWYU pragma private; include "Zenject/FactoryToChoiceBinder_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryFromBinder_2_def.hpp"
CORDL_MODULE_EXPORT(FactoryToChoiceBinder_2)
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
template <typename TParam1, typename TContract> class FactoryFromBinder_2;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TContract> class FactoryToChoiceBinder_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryToChoiceBinder_2);
// Dependencies Zenject.FactoryFromBinder`2<TParam1, TContract>
namespace Zenject {
// cpp template
template <typename TParam1, typename TContract>
// Is value type: false
// CS Name: Zenject.FactoryToChoiceBinder`2<TParam1,TContract>
class CORDL_TYPE FactoryToChoiceBinder_2 : public ::Zenject::FactoryFromBinder_2<TParam1, TContract> {
public:
  // Declarations
  static inline ::Zenject::FactoryToChoiceBinder_2<TParam1, TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method To, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TConcrete> inline ::Zenject::FactoryFromBinder_2<TParam1, TConcrete>* To();

  /// @brief Method ToSelf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FactoryFromBinder_2<TParam1, TContract>* ToSelf();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryToChoiceBinder_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryToChoiceBinder_2(FactoryToChoiceBinder_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryToChoiceBinder_2(FactoryToChoiceBinder_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12189 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceBinder_2, "Zenject", "FactoryToChoiceBinder`2");
