#pragma once
// IWYU pragma private; include "Zenject/MemoryPoolInitialSizeMaxSizeBinder_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MemoryPoolMaxSizeBinder_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryPoolInitialSizeMaxSizeBinder_1)
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
namespace Zenject {
class MemoryPoolBindInfo;
}
namespace Zenject {
template <typename TContract> class MemoryPoolMaxSizeBinder_1;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class MemoryPoolInitialSizeMaxSizeBinder_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1);
// Type: Zenject::MemoryPoolInitialSizeMaxSizeBinder`1
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: ::Zenject::MemoryPoolInitialSizeMaxSizeBinder`1<TContract>*
class CORDL_TYPE MemoryPoolInitialSizeMaxSizeBinder_1 : public ::Zenject::MemoryPoolMaxSizeBinder_1<TContract> {
public:
  // Declarations
  static inline ::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                                     ::Zenject::MemoryPoolBindInfo* poolBindInfo);

  /// @brief Method WithFixedSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* WithFixedSize(int32_t size);

  /// @brief Method WithInitialSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::MemoryPoolMaxSizeBinder_1<TContract>* WithInitialSize(int32_t size);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo, ::Zenject::MemoryPoolBindInfo* poolBindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryPoolInitialSizeMaxSizeBinder_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolInitialSizeMaxSizeBinder_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryPoolInitialSizeMaxSizeBinder_1(MemoryPoolInitialSizeMaxSizeBinder_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolInitialSizeMaxSizeBinder_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryPoolInitialSizeMaxSizeBinder_1(MemoryPoolInitialSizeMaxSizeBinder_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12167 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1, "Zenject", "MemoryPoolInitialSizeMaxSizeBinder`1");
