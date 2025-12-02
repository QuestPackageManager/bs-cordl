#pragma once
// IWYU pragma private; include "Zenject/MemoryPoolBindingFinalizer_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
CORDL_MODULE_EXPORT(MemoryPoolBindingFinalizer_1)
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
// Forward declare root types
namespace Zenject {
template <typename TContract> class MemoryPoolBindingFinalizer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MemoryPoolBindingFinalizer_1);
// Dependencies Zenject.ProviderBindingFinalizer
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.MemoryPoolBindingFinalizer`1<TContract>
class CORDL_TYPE MemoryPoolBindingFinalizer_1 : public ::Zenject::ProviderBindingFinalizer {
public:
  // Declarations
  /// @brief Field _factoryBindInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__factoryBindInfo, put = __cordl_internal_set__factoryBindInfo)) ::Zenject::FactoryBindInfo* _factoryBindInfo;

  /// @brief Field _poolBindInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__poolBindInfo, put = __cordl_internal_set__poolBindInfo)) ::Zenject::MemoryPoolBindInfo* _poolBindInfo;

  static inline ::Zenject::MemoryPoolBindingFinalizer_1<TContract>* New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo, ::Zenject::MemoryPoolBindInfo* poolBindInfo);

  /// @brief Method OnFinalizeBinding, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnFinalizeBinding(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactoryBindInfo* const& __cordl_internal_get__factoryBindInfo() const;

  constexpr ::Zenject::FactoryBindInfo*& __cordl_internal_get__factoryBindInfo();

  constexpr ::Zenject::MemoryPoolBindInfo* const& __cordl_internal_get__poolBindInfo() const;

  constexpr ::Zenject::MemoryPoolBindInfo*& __cordl_internal_get__poolBindInfo();

  constexpr void __cordl_internal_set__factoryBindInfo(::Zenject::FactoryBindInfo* value);

  constexpr void __cordl_internal_set__poolBindInfo(::Zenject::MemoryPoolBindInfo* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo, ::Zenject::MemoryPoolBindInfo* poolBindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryPoolBindingFinalizer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolBindingFinalizer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryPoolBindingFinalizer_1(MemoryPoolBindingFinalizer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolBindingFinalizer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryPoolBindingFinalizer_1(MemoryPoolBindingFinalizer_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14187 };

  /// @brief Field _poolBindInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::MemoryPoolBindInfo* ____poolBindInfo;

  /// @brief Field _factoryBindInfo, offset: 0x20, size: 0x8, def value: None
  ::Zenject::FactoryBindInfo* ____factoryBindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MemoryPoolBindingFinalizer_1, "Zenject", "MemoryPoolBindingFinalizer`1");
