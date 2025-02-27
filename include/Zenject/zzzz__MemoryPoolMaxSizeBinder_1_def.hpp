#pragma once
// IWYU pragma private; include "Zenject/MemoryPoolMaxSizeBinder_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MemoryPoolExpandBinder_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryPoolMaxSizeBinder_1)
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
class MemoryPoolBindInfo;
}
namespace Zenject {
template <typename TContract> class MemoryPoolExpandBinder_1;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class MemoryPoolMaxSizeBinder_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MemoryPoolMaxSizeBinder_1);
// Dependencies Zenject.MemoryPoolExpandBinder`1<TContract>
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.MemoryPoolMaxSizeBinder`1<TContract>
class CORDL_TYPE MemoryPoolMaxSizeBinder_1 : public ::Zenject::MemoryPoolExpandBinder_1<TContract> {
public:
  // Declarations
  static inline ::Zenject::MemoryPoolMaxSizeBinder_1<TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                          ::Zenject::MemoryPoolBindInfo* poolBindInfo);

  /// @brief Method WithMaxSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::MemoryPoolExpandBinder_1<TContract>* WithMaxSize(int32_t size);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo, ::Zenject::MemoryPoolBindInfo* poolBindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryPoolMaxSizeBinder_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolMaxSizeBinder_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryPoolMaxSizeBinder_1(MemoryPoolMaxSizeBinder_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolMaxSizeBinder_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryPoolMaxSizeBinder_1(MemoryPoolMaxSizeBinder_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12209 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MemoryPoolMaxSizeBinder_1, "Zenject", "MemoryPoolMaxSizeBinder`1");
